/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

// Mihir Patel
// Team 206 - Smart Curtain Subsystem
// EGR 304 (M/W - 1:30PM) - Prof. Nichols

#include "mcc_generated_files/adc/adc.h"
#include "mcc_generated_files/dac/dac1.h"
#include "mcc_generated_files/pwm/pwm1_16bit.h"
#include "mcc_generated_files/pwm/pwm2_16bit.h"
#include "mcc_generated_files/pwm/pwm3_16bit.h"
#include "mcc_generated_files/system/clock.h"
#include "mcc_generated_files/system/config_bits.h"
#include "mcc_generated_files/system/interrupt.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/uart/uart1.h"
#include <stdio.h>
#include <stdbool.h>

#define ADC_MAX       4095    // 12-bit ADC max value
#define PWM_MAX       65535   // 16-bit PWM full scale

// Set appropriate thresholds
#define POT_THRESHOLD       2048
#define PHOTO_START_LEVEL   84000     // photo latch threshold
#define TEMP_THRESHOLD      81100      // temp latch threshold

void main(void)
{
    SYSTEM_Initialize();

    uint16_t potValue, photoValue, tempValue;
    uint16_t motorDutyA = 0, motorDutyB = 0, debugLedDuty;
    bool overrideButton;
    uint8_t motor_dir = 0;        // 0=Forward, 1=Reverse
    bool prevButtonState = 0;     // The state of the button last time we checked 
    bool photo_triggered = false; // Latches once photoresistor reaches threshold
    bool temp_triggered  = false; // Latches once temperature exceeds threshold

    while (1)
    {
        // --- Read PIR Sensor (RA0) ---
        ADC_ChannelSelect(ADC_CHANNEL_ANA0); // AN0/RA0
        ADC_ConversionStart();
        while(!ADC_IsConversionDone());
        potValue = ADC_ConversionResultGet();
        printf("Pot: %u\r\n", potValue);
        __delay_ms(100);

        // --- Read Photoresistor (RA1) ---
        ADC_ChannelSelect(ADC_CHANNEL_ANA1); // AN1/RA1
        ADC_ConversionStart();
        while(!ADC_IsConversionDone());
        photoValue = ADC_ConversionResultGet();
        printf("PHOTO: %u\r\n", photoValue);
        __delay_ms(100);

        // Latch photoresistor trigger once it reaches PHOTO_START_LEVEL
        if (!photo_triggered && photoValue >= PHOTO_START_LEVEL) {
            photo_triggered = true;
            printf("Photoresistor trigger set (>= %u). Motor will start and stay controlled by this.\r\n", PHOTO_START_LEVEL);
        }

        // --- Read Temperature Sensor (RA2) ---
        ADC_ChannelSelect(ADC_CHANNEL_ANA2); // AN2/RA2
        ADC_ConversionStart();
        while(!ADC_IsConversionDone());
        tempValue = ADC_ConversionResultGet();
        printf("TEMP: %u\r\n", tempValue);
        __delay_ms(100);

        // Latch temperature trigger once it exceeds TEMP_THRESHOLD
        if (!temp_triggered && tempValue > TEMP_THRESHOLD) {
            temp_triggered = true;
            printf("Temperature trigger set (> %u). Motor will start and stay controlled by this.\r\n", TEMP_THRESHOLD);
        }

        // Read the button.
        // If pressed, overrideButton will be true (button uses pull-up, active-low logic)
        overrideButton = (PORTBbits.RB4 == 0);

        // If the button was just pressed now (not pressed before)
        bool curButtonState = overrideButton;
        if (prevButtonState == 1 && curButtonState == 0) {
            // Button transitioned from not pressed to pressed: toggle dir
            motor_dir ^= 1;  // Change the motor's direction (toggle from forward to reverse or back)
            printf("Motor direction changed to: %s\r\n", motor_dir == 0 ? "Forward" : "Reverse");
            __delay_ms(200); 
        }
        prevButtonState = curButtonState;  // Remember state for next check

        // --- Control Logic ---
        if (overrideButton) {
            // Manual override: run motor full speed in selected direction
            motorDutyA = (motor_dir == 0) ? PWM_MAX : 0;  // Forward
            motorDutyB = (motor_dir == 1) ? PWM_MAX : 0;  // Reverse
            debugLedDuty = PWM_MAX / 2;  // LED half brightness to show it's running
        }
        else if (photo_triggered) {
            // Once photoresistor reached PHOTO_START_LEVEL, always drive motor forward at half speed
            motorDutyA = PWM_MAX / 2;
            motorDutyB = 0;
            motor_dir = 0;
            debugLedDuty = PWM_MAX / 2;
        }
        else if (temp_triggered) {
            // Once temperature exceeded TEMP_THRESHOLD, always drive motor backward at half speed
            motorDutyA = 0;
            motorDutyB = PWM_MAX / 2;
            motor_dir = 1;
            debugLedDuty = PWM_MAX / 2;
        }
        else {
            // Button not pressed and neither photo nor temp have latched yet
            motorDutyA = 0;
            motorDutyB = 0;
            debugLedDuty = PWM_MAX / 16;  // LED very dim

            // Note: photoValue no longer used here; only pot and temp before they latch
            if ((potValue > POT_THRESHOLD) ||
                (tempValue > TEMP_THRESHOLD)) {
                debugLedDuty = PWM_MAX / 2;  // LED brighter

                if (tempValue > TEMP_THRESHOLD) {
                    // If temperature is high (before latch), move backward
                    motorDutyA = 0;
                    motorDutyB = PWM_MAX / 2;
                    motor_dir = 1;
                }
                else if (potValue > POT_THRESHOLD) {
                    // If knob is turned enough: move forward
                    motorDutyA = PWM_MAX / 2;
                    motorDutyB = 0;
                    motor_dir = 0;
                }
            }
        }
        
        // Print current chosen direction and duty
        printf("Motor Direction: %s, PWM Forward: %u, PWM Reverse: %u\r\n",
                motor_dir == 0 ? "Forward" : "Reverse", motorDutyA, motorDutyB);

        // Apply PWM Outputs 
        PWM1_16BIT_SetSlice1Output1DutyCycleRegister(debugLedDuty);   // Debug LED 
        PWM2_16BIT_SetSlice1Output1DutyCycleRegister(motorDutyA);     // Motor forward
        PWM3_16BIT_SetSlice1Output1DutyCycleRegister(motorDutyB);     // Motor reverse

        // Update buffer registers 
        PWM1_16BIT_LoadBufferRegisters();
        PWM2_16BIT_LoadBufferRegisters();
        PWM3_16BIT_LoadBufferRegisters();

        __delay_ms(10);
    }
}

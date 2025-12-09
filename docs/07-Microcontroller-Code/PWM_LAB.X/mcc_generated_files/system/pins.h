/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_OD                   ODCONAbits.ODCA0
#define IO_RA0_ANS                  ANSELAbits.ANSELA0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IO_RA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA1 aliases
#define IO_RA1_TRIS                 TRISAbits.TRISA1
#define IO_RA1_LAT                  LATAbits.LATA1
#define IO_RA1_PORT                 PORTAbits.RA1
#define IO_RA1_WPU                  WPUAbits.WPUA1
#define IO_RA1_OD                   ODCONAbits.ODCA1
#define IO_RA1_ANS                  ANSELAbits.ANSELA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define IO_RA1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define IO_RA1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.WPUA2
#define IO_RA2_OD                   ODCONAbits.ODCA2
#define IO_RA2_ANS                  ANSELAbits.ANSELA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define IO_RA2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RB0 aliases
#define IO_RB0_TRIS                 TRISBbits.TRISB0
#define IO_RB0_LAT                  LATBbits.LATB0
#define IO_RB0_PORT                 PORTBbits.RB0
#define IO_RB0_WPU                  WPUBbits.WPUB0
#define IO_RB0_OD                   ODCONBbits.ODCB0
#define IO_RB0_ANS                  ANSELBbits.ANSELB0
#define IO_RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IO_RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IO_RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IO_RB0_GetValue()           PORTBbits.RB0
#define IO_RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IO_RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IO_RB0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IO_RB0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IO_RB0_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IO_RB0_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IO_RB0_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define IO_RB0_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSELB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_OD                   ODCONBbits.ODCB4
#define IO_RB4_ANS                  ANSELBbits.ANSELB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSELB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSELC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_WPU                  WPUCbits.WPUC7
#define IO_RC7_OD                   ODCONCbits.ODCC7
#define IO_RC7_ANS                  ANSELCbits.ANSELC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RC7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RC7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RC7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RD0 aliases
#define IO_RD0_TRIS                 TRISDbits.TRISD0
#define IO_RD0_LAT                  LATDbits.LATD0
#define IO_RD0_PORT                 PORTDbits.RD0
#define IO_RD0_WPU                  WPUDbits.WPUD0
#define IO_RD0_OD                   ODCONDbits.ODCD0
#define IO_RD0_ANS                  ANSELDbits.ANSELD0
#define IO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_RD0_GetValue()           PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_RD0_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define IO_RD0_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define IO_RD0_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define IO_RD0_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define IO_RD0_SetAnalogMode()      do { ANSELDbits.ANSELD0 = 1; } while(0)
#define IO_RD0_SetDigitalMode()     do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set RD2 aliases
#define IO_RD2_TRIS                 TRISDbits.TRISD2
#define IO_RD2_LAT                  LATDbits.LATD2
#define IO_RD2_PORT                 PORTDbits.RD2
#define IO_RD2_WPU                  WPUDbits.WPUD2
#define IO_RD2_OD                   ODCONDbits.ODCD2
#define IO_RD2_ANS                  ANSELDbits.ANSELD2
#define IO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_RD2_GetValue()           PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_RD2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_RD2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_RD2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define IO_RD2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define IO_RD2_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set RD3 aliases
#define IO_RD3_TRIS                 TRISDbits.TRISD3
#define IO_RD3_LAT                  LATDbits.LATD3
#define IO_RD3_PORT                 PORTDbits.RD3
#define IO_RD3_WPU                  WPUDbits.WPUD3
#define IO_RD3_OD                   ODCONDbits.ODCD3
#define IO_RD3_ANS                  ANSELDbits.ANSELD3
#define IO_RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_RD3_GetValue()           PORTDbits.RD3
#define IO_RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_RD3_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define IO_RD3_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define IO_RD3_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define IO_RD3_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define IO_RD3_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define IO_RD3_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set RD5 aliases
#define IO_RD5_TRIS                 TRISDbits.TRISD5
#define IO_RD5_LAT                  LATDbits.LATD5
#define IO_RD5_PORT                 PORTDbits.RD5
#define IO_RD5_WPU                  WPUDbits.WPUD5
#define IO_RD5_OD                   ODCONDbits.ODCD5
#define IO_RD5_ANS                  ANSELDbits.ANSELD5
#define IO_RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_RD5_GetValue()           PORTDbits.RD5
#define IO_RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_RD5_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define IO_RD5_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define IO_RD5_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define IO_RD5_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define IO_RD5_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define IO_RD5_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set RD6 aliases
#define IO_RD6_TRIS                 TRISDbits.TRISD6
#define IO_RD6_LAT                  LATDbits.LATD6
#define IO_RD6_PORT                 PORTDbits.RD6
#define IO_RD6_WPU                  WPUDbits.WPUD6
#define IO_RD6_OD                   ODCONDbits.ODCD6
#define IO_RD6_ANS                  ANSELDbits.ANSELD6
#define IO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_RD6_GetValue()           PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_RD6_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define IO_RD6_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define IO_RD6_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define IO_RD6_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define IO_RD6_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define IO_RD6_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set RD7 aliases
#define IO_RD7_TRIS                 TRISDbits.TRISD7
#define IO_RD7_LAT                  LATDbits.LATD7
#define IO_RD7_PORT                 PORTDbits.RD7
#define IO_RD7_WPU                  WPUDbits.WPUD7
#define IO_RD7_OD                   ODCONDbits.ODCD7
#define IO_RD7_ANS                  ANSELDbits.ANSELD7
#define IO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_RD7_GetValue()           PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_RD7_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define IO_RD7_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define IO_RD7_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define IO_RD7_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define IO_RD7_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define IO_RD7_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set RF0 aliases
#define IO_RF0_TRIS                 TRISFbits.TRISF0
#define IO_RF0_LAT                  LATFbits.LATF0
#define IO_RF0_PORT                 PORTFbits.RF0
#define IO_RF0_WPU                  WPUFbits.WPUF0
#define IO_RF0_OD                   ODCONFbits.ODCF0
#define IO_RF0_ANS                  ANSELFbits.ANSELF0
#define IO_RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define IO_RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define IO_RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define IO_RF0_GetValue()           PORTFbits.RF0
#define IO_RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define IO_RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define IO_RF0_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define IO_RF0_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define IO_RF0_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define IO_RF0_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define IO_RF0_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define IO_RF0_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set RF1 aliases
#define IO_RF1_TRIS                 TRISFbits.TRISF1
#define IO_RF1_LAT                  LATFbits.LATF1
#define IO_RF1_PORT                 PORTFbits.RF1
#define IO_RF1_WPU                  WPUFbits.WPUF1
#define IO_RF1_OD                   ODCONFbits.ODCF1
#define IO_RF1_ANS                  ANSELFbits.ANSELF1
#define IO_RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define IO_RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define IO_RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define IO_RF1_GetValue()           PORTFbits.RF1
#define IO_RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define IO_RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define IO_RF1_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define IO_RF1_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define IO_RF1_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define IO_RF1_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define IO_RF1_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define IO_RF1_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/
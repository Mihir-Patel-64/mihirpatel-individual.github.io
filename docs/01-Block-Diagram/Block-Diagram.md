---
title: Individal Block Diagram - Mihir’s Subsystem - Smart Curtain Control
tags:
- tag1
- tag2
---

# Overview

This subsystem represents **Mihir Patel’s** portion of **Team 206’s Smart Curtain Control** project.  
It focuses on automating curtain movement using environmental sensing and motor control through the Microchip PIC18F57Q43 Curiosity Nano microcontroller.


---

# System Description

The subsystem serves as the main control hub within the team’s hub-and-spoke architecture.  
Mihir’s board receives analog signals from other subsystems. Specifically, the photoresistor and potentiometer on Adrian’s board and the DAC output from Zane’s board.  

Using these inputs, the microcontroller processes sensor data and generates control signals for the H-Bridge motor driver, which powers the DC motor to open or close the curtain along the rod.  
A red LED indicator provides local visual feedback on system operation, while a push button enables manual curtain control.  

This centralized design allows Mihir’s board to integrate all sensor inputs and coordinate curtain movement logic for the entire system.


---

# Power Configuration

The system uses two distinct voltage rails to ensure reliable operation:

- **5V, 1.5A regulated supply:** Powers the microcontroller, logic components, and control signals  
- **9V, 3A unregulated source:** Powers the H-Bridge and DC motor  

Separating these power domains reduces noise from the motor and maintains clean operation for analog and digital circuits.


---

# Signal Connections

- **Analog input** connects the motion sensor to the microcontroller for environmental detection
- **PWM and digital control signals** from the microcontroller operate the H-Bridge for motor direction and speed control
- **Digital input** from a push button enables manual actuation
- **Digital output** drives the onboard status LED

The subsystem is designed using directional, labeled signal paths showing signal type and number of signal pins — per EGR-304 block diagram standards.

---

# Summary

This modular block diagram documents Mihir’s subsystem layout, illustrating clear power, sensor, and actuator interactions within the overall smart curtain system.

---

## Figure 1 — Mihir Patel Subsystem Block Diagram
![Indivial Block diagram - Team 206](Block_Diagram_MP.drawio.png)

### Source Files

- **View the editable draw.io source:**  
  [Open draw.io Diagram](https://drive.google.com/file/d/1Bihu2sKXNBjKrWqonAoy2F8wztL418d_/view?usp=sharing)

- **Download the .drawio file from GitHub repository:**  
  [Download from GitHub](https://github.com/Mihir-Patel-64/mihirpatel-individual.github.io/blob/main/docs/01-Block-Diagram/Block_Diagram_MP.jpg)

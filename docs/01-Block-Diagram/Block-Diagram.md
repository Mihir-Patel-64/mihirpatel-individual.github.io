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

Mihir’s system functions as the main control and sensing hub in the team’s modular architecture.
This subsystem handles all local sensor interfacing, including the integrated motion sensor (LSI/CSI LS6501LP) and an op amp (Microchip MCP6004), as well as connections to external subsystems via digital and analog signal ports.

The microcontroller processes environmental and manual inputs, generating precise PWM and digital signals to control the H-Bridge (ON Semiconductor FAN8100N), which drives the Pololu 2371 DC motor for curtain actuation.

A debug LED provides status indication, and a dedicated push button offers manual system override.

---

# Power Configuration

The entire subsystem operates from a single 5V regulated power rail (LM7805, 1.5A), which supplies the microcontroller, all logic, the H-Bridge, and the DC motor.​
This streamlined approach simplifies wiring and power management, while ensuring reliable operation for both low-power logic and higher-current actuators.

---

# Signal Connections

- **Analog inputs** from the motion sensor and op amp interface directly to the PIC18F57Q43’s analog channels for real-time environmental sensing

- **PWM and digital outputs** from the microcontroller precisely control the H-Bridge for DC motor direction and speed

- **Digital input** is provided by a manual debug button

- **Digital output** drives the onboard status/debug LED

- Signal headers (digital/analog connectors) accommodate external expansion and subsystem module interfacing, following EGR-304 block diagram best practices for clarity and reproducibility

All signal paths are clearly labeled for voltage level, type (analog, digital, PWM), and pin assignments, as required for formal subsystem documentation.

---

# Summary

This block diagram documents the layout of Mihir’s curtain control subsystem, illustrating explicit power, sensing, and actuation paths.
The design emphasizes modularity, robust motor control, and straightforward integration into the broader smart curtain system being developed by Team 206.

---

## Figure 1 — Mihir Patel Subsystem Block Diagram
![Indivial Block diagram - Team 206](Block_Diagram_MP.drawio.png)

### Source Files

- **View the editable draw.io source:**  
  [Open draw.io Diagram](https://drive.google.com/file/d/1Bihu2sKXNBjKrWqonAoy2F8wztL418d_/view?usp=sharing)

- **Download the .drawio file from GitHub repository:**  
  [Download from GitHub](https://github.com/Mihir-Patel-64/mihirpatel-individual.github.io/blob/main/docs/01-Block-Diagram/Block_Diagram_MP.drawio.png)

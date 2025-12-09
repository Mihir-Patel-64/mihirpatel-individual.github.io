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

### Zane's Connector (Temperature Sensor Circuit Connector)

| Pin | From        | To          | Type            | Description                              |
|-----|-------------|-------------|-----------------|------------------------------------------|
| 1   | Mihir (RC4) | Zane (RB1)  | 0–5 V Digital   | Digital control / status signal          |
| 2   | Zane (RB2)  | Mihir (RD0) | 0–5 V Digital   | Digital control / status signal          |
| 3   | Mihir (RD5) | Zane (RD5)  | 0–5 V Digital   | Flex pin (general‑purpose digital I/O)   |
| 4   | Mihir (RD6) | Zane (RD6)  | 0–5 V Digital   | Flex pin (general‑purpose digital I/O)   |
| 5   | Mihir (RD7) | Zane (RD7)  | 0–5 V Digital   | Flex pin (general‑purpose digital I/O)   |
| 6   | Mihir (RB7) | Zane (RA7)  | 0–5 V Analog    | Motion sensor output                     |
| 7   | Zane (RA2)  | Mihir (RA2) | 0–5 V Analog    | Temperature sensor output                |
| 8   | Ground      | Ground      | Ground          | Common ground reference                  |

---

### Adrian's Connector (Photoresistor Sensor Circuit Connector)

| Pin | From        | To          | Type            | Description                              |
|-----|-------------|-------------|-----------------|------------------------------------------|
| 1   | Mihir (RD3) | Zane (RB2)  | 0–5 V Digital   | Digital control / status signal          |
| 2   | Zane (RF0)  | Mihir (RD2) | 0–5 V Digital   | Digital control / status signal          |
| 3   | Mihir (RD5) | Zane (RD5)  | 0–5 V Digital   | Flex pin (general‑purpose digital I/O)   |
| 4   | Mihir (RD6) | Zane (RD6)  | 0–5 V Digital   | Flex pin (general‑purpose digital I/O)   |
| 5   | Mihir (RD7) | Zane (RD7)  | 0–5 V Digital   | Flex pin (general‑purpose digital I/O)   |
| 6   | Mihir (RB7) | Zane (RB7)  | 0–5 V Analog    | Motion sensor output                     |
| 7   | Zane (RA7)  | Mihir (RA1) | 0–5 V Analog    | Photoresistor sensor output              |
| 8   | Ground      | Ground      | Ground          | Common ground reference                  |


---

## Figure 1 — Mihir Patel Subsystem Block Diagram
![Indivial Block diagram - Team 206](Block_Diagram_MP.drawio.png)

### Source Files

- **View the editable draw.io source:**  
  [Open draw.io Diagram](https://drive.google.com/file/d/1Bihu2sKXNBjKrWqonAoy2F8wztL418d_/view?usp=sharing)

- **Download the .drawio file from GitHub repository:**  
  [Download from GitHub](https://github.com/Mihir-Patel-64/mihirpatel-individual.github.io/blob/main/docs/01-Block-Diagram/Block_Diagram_MP.drawio.png)

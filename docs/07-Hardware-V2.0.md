---
title: Hardware V2.0 – Proposed Improvements
---

# Hardware V2.0 – Proposed Improvements

This page outlines the proposed improvements for Version 2.0 of Mihir Patel’s Smart Curtain Control subsystem. The goal is to increase efficiency, reliability, debuggability, and long-term scalability while keeping the core system architecture unchanged.

---

## Overview

Hardware V2.0 focuses on:
- Improving power efficiency and thermal performance  
- Strengthening motor control, feedback, and protection  
- Enhancing signal integrity and sensor reliability  
- Increasing debuggability through better test access  
- Improving PCB layout, EMI robustness, and system safety  
- Designing for real-world installation and future expansion  

---

## 1. Power Architecture and Thermal Management

### Replace LM7805 with a switching regulator
The LM7805 dissipates significant heat when stepping 9 V down to 5 V under motor load. A buck regulator (5 V, 2–3 A) increases efficiency, reduces heat, and improves long-term reliability.

### Optimize supply voltage for motor and logic
V2.0 may use:
- A 5–6 V external adapter, **or**  
- Separate rails (7–9 V for the H-bridge, 5 V buck for logic)

This reduces regulator stress, simplifies power analysis, and boosts system efficiency.

---

## 2. Motor Control and Feedback

### Add position or speed feedback
The current motor is open-loop. V2.0 could add:
- A motor with integrated encoder, or  
- An external optical/magnetic encoder  

This enables closed-loop motion (“25% open,” “50% open”), improving consistency and load compensation.

### Upgrade or re-evaluate H-bridge margins
The FAN8100N has limited continuous current capability. Options for V2.0 include:
- Selecting a motor driver with higher current/thermal capacity, or  
- Adding a current-sense resistor and over-current monitoring  

This protects the system during jams, stalls, or overloads.

---

## 3. Signal Integrity and Sensor Interfaces

### Refine analog front-end for motion and light sensing
Enhancements include:
- Adding low-pass filters and adjustable gain stages  
- Using a dedicated, well-decoupled analog ground  

These improvements reduce noise and false triggers from PWM motor activity.

### Standardize connectors and pinouts
Switching to keyed, locking connectors (Molex KK, MicroFit, etc.) prevents wiring mistakes and improves reliability during installation.

---

## 4. Microcontroller and Debug Features

### Expose more dedicated debug/test points
V2.0 will include labeled pads for:
- Motor driver control lines  
- Sensor outputs  
- Power rails  

These greatly simplify debugging and oscilloscope measurements.

### Consider moving from dev board to custom MCU PCB
Instead of relying on the Curiosity Nano, integrating the PIC18F57Q43 directly onto the PCB:
- Reduces footprint  
- Improves layout control  
- Minimizes connectors  
- Keeps high-current paths isolated from sensitive analog areas  

---

## 5. Layout, EMI, and Safety

### Improve PCB layout for high-current paths
V2.0 should incorporate:
- Shorter, wider traces for motor and H-bridge paths  
- Clear separation from analog areas  
- Optional snubbers or TVS diodes for inductive suppression  

These changes reduce EMI and improve component protection.

### Add fusing and reverse-polarity protection
A polyfuse or inline fuse on the 9 V input, plus reverse-polarity MOSFET/diode protection, helps prevent electrical damage and improves safety.

---

## 6. Mechanical and System-Level Integration

### Design for enclosure and mounting
Enhancements include:
- Proper mounting holes  
- Edge-aligned connectors for sensors, motor, and power  
- Board sizing that fits standard project boxes  

This makes installation cleaner and more practical.

### Plan for future sensor expansion
By reserving MCU pins and spare op-amp channels, V2.0 can support:
- Ambient temperature sensing  
- Motor current sensing  
- Additional optional modules  

---

## Summary

Hardware V2.0 keeps the same functional architecture but significantly improves efficiency, robustness, and future expandability. With a switching regulator, enhanced feedback options, cleaner analog interfaces, improved protection, and a more professional PCB layout, the subsystem becomes much closer to a deployable smart-home product rather than a lab-only prototype.

---

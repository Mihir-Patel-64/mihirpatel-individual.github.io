---
title: Power Budget
---

# Power Budget

This page presents the Power Budget for the system design, ensuring that all voltage rails, regulators, and power sources can reliably meet the required current demand for every subsystem.

---

## Overview

The Power Budget includes:
- Power requirements of all major components.
- Assigned voltage rails and current consumption.  
- Regulator and source selections with safety margins.  

---

## Power Budget Table

![Power Budget Table](PowerBudget_MP.jpg)

---

### Downloadable Files

- **Power Budget EXCEL:**  
[Download Power Budget (Excel)](PowerBudget_MP.xlsx)  

- **Power Budget ZIP:**  
[Download Power Budget (ZIP)](PowerBudget_MP.xlsx.zip)

- **Power Budget PDF:**  
[Download Power Budget (PDF)](PowerBudget_MP.pdf)

---

## Power Rails and Regulators

| **Power Rail** | **Regulator / Source** | **Part Number** | **Output Voltage** | **Max Current (mA)** | **Notes** |
|----------------|------------------------|------------------|--------------------|----------------------|------------|
| +12V | External Power Supply | Mean Well LRS-100-12 | +12V | 8500 | Powers DC motor and PIR motion sensor |
| +5V | Buck Regulator | Pololu S13V15F5 | +5V | 1500 | Powers microcontroller, motor driver, LED, and user input switch |


---

## Power Source Verification

| **Power Source** | **Part Number** | **Output** | **Max Current (mA)** | **Used (mA)** | **Remaining (mA)** |
|------------------|----------------|-----------|---------------------|---------------|-------------------|
| Wall Supply | Mean Well LRS-100-12 | +12V, 10A | 8500 | 6876.25 | 1623.75 |

> The 12V source supplies all regulators and rails with plenty of remaining current.

> No battery supply is needed for this subsystem.

---

### Power Budget Summary

The power budget quantified the electrical demands of the subsystem and guided component selection. By listing each major active device and assigning it to a single voltage rail, we calculated per-rail subtotals and applied a 25% safety margin to account for peak conditions and future changes. This analysis identified the DC motor as the dominant load on the +12V rail, requiring a high-current external supply (Mean Well LRS-100-12). The +5V logic rail is lightly loaded (≈110 mA), so a compact, efficient buck regulator (Pololu S13V15F5) provides ample headroom. Removing unused rails (3.3V and −5V) simplified the design and reduced regulator count, improving reliability. The remaining margins confirm the selected supplies can safely power the subsystem with capacity for modest future expansion.

---
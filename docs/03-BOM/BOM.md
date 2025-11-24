---
title: Bill of Materials
tags:
- tag1
- tag2
---

## Overview

This Bill of Materials (BOM) lists every electronic component required for Mihir Patel’s Smart Curtain Control subsystem, including active components, passives, connectors, and hardware needed for prototyping and PCB assembly.
All components are documented with manufacturer details, reference designators, datasheet links, and purchasing sources for transparency and traceability.

Spare quantities are included for critical components to ensure reliability during testing, soldering, and integration with the team system.

## Bill of Materials 

*Table 01: Items below represent the complete BOM associated with this subsystem.*

### Bill of Materials — Smart Curtain Subsystem (Team 206)

| **Part Name/Description** | **Qty** | **Unit Cost** | **Total Cost** | **Manufacturer** | **Manufacturer #** | **Vendor / Source** | **Datasheet / Product Link** | **Reference** |
|:-------------------------|:------:|:-------------:|:--------------:|:----------------:|:------------------:|:------------------:|:----------------------------------:|:-----------:|
| Curiosity Nano Dev Board (PIC18F57Q43) | 1 | $20.89 | $20.89 | Microchip | PIC18F57Q43 | Digi-Key | [Datasheet](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/UserGuides/PIC18F57Q43-Curiosity-Nano-HW-UserGuide-DS40002186B.pdf) | U2 |
| Amazon Basics 9V 3A AC/DC Adapter (B09ZTKTLGW) | 1 | $4.99 | $4.99 | Amazon Basics | B09ZTKTLGW | Amazon | [Product Page](https://www.amazon.com/gp/product/B09ZTKTLGW/) | - |
| H-Bridge Motor Driver (FAN8100N) | 1(+1) | $1.16 | $2.32 | Fairchild / Onsemi | FAN8100N | Digikey | [Datasheet](https://rocelec.widen.net/view/pdf/1pizbjqffm/FAIRS23777-1.pdf?t.download=true&u=5oefqw) | U3 (+ spare) |
| Pololu 2371 DC Motor | 1(+1) | $23.95 | $47.90 | Pololu | 2371 | Pololu | [Datasheet](https://www.pololu.com/file/0J1487/pololu-micro-metal-gearmotors-rev-6-1.pdf) | M1 (+ spare) |
| Op-Amp Microchip MCP6004 | 1(+1) | $0.59 | $1.18 | Microchip | MCP6004 | Digikey | [Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/MCP6001-1R-1U-2-4-1-MHz-Low-Power-Op-Amp-DS20001733L.pdf) | U5 (+ spare) |
| PIR Motion Sensor (LS6501LP) | 1(+1) | $2.95 | $5.90 | LSI | LS6501LP | Digi-Key | [Datasheet](https://cdn.thomasnet.com/ccp/00417955/110685.pdf) | U4 (+ spare) |
| 5V 1.5A Linear Regulator (LM7805) | 1(+1) | $1.80 | $3.60 | STMicroelectronics | LM7805 | Pololu | [Datasheet](https://www.ti.com/lit/ds/symlink/lm7800.pdf) | U1 (+ spare) |
| PJ-102AH CONN PWR JACK 2X5.5MM SOLDER | 2 | $0.62 | $1.24 | CUI / Generic | PJ-102AH | **Available at Peralta** | [Datasheet](https://www.digikey.com/en/products/detail/cui-devices/PJ-102AH/408448) | J1 (+ spare) |
| Fuse Holder (5×20mm) w/ 2A Fuse | 2 | $0.50 | $1.00 | Bulgin / Generic | 5×20mm Holder | **Available at Peralta** | [Datasheet](https://www.littelfuse.com/assetdocs/littelfuse-fuse-217-datasheet?assetguid=af55be94-c42e-41b1-ad43-e070e09443fe) | F1 (+ spare) |
| Molex 8-Pin Board Header | 2 | $0.75 | $1.50 | Molex | 5264-08 | **Available at Peralta** | [Datasheet](https://www.alldatasheet.com/datasheet-pdf/pdf/364145/MOLEX3/5264-08.html) | J2, J3 |
| 0.1 µF Ceramic Capacitor, 50V (THT) | 10 | $0.05 | $0.50 | Various | THT Ceramic Disc | **Available at Peralta** | [Datasheet](https://www.digikey.com/en/products/detail/murata-electronics/GRM033C71C104KE14D/5027472) | C2, C3, C4, C5, C6, C7, C8 (+ extras) |
| 0.33 µF Ceramic Capacitor, 50V (THT) | 2 | $0.10 | $0.20 | Various | THT Ceramic | **Available at Peralta** | [Datasheet](https://www.digikey.com/en/products/detail/murata-electronics/GRM155R61A334KE15D/702527) | C1 (+ spare) |
| 10 kΩ Axial Resistor | 4 | $0.02 | $0.08 | Yageo / Various | 10K THT | **Available at Peralta** | [Datasheet](https://s.resistor.today/shop/products/epdf/MMFR.pdf) | R2, R3 (+ extras) |
| 220 Ω Axial Resistor | 4 | $0.02 | $0.08 | Yageo / Various | 220Ω THT | **Available at Peralta** | [Datasheet](https://s.resistor.today/shop/products/epdf/MMFR.pdf) | R1 (+ extras) |
| Red 5mm LED Indicator | 2 | $0.26 | $0.52 | Kingbright | WP710A10ND | **Available at Peralta** | [Datasheet](https://www.kingbrightusa.com/images/catalog/SPEC/WP710A10ND.pdf) | D1 (+ spare) |
| Pushbutton Tactile Switch | 2 | $0.24 | $0.48 | Omron | B3F-1000 | **Available at Peralta** | [Datasheet](https://omronfs.omron.com/en_US/ecb/products/pdf/en-b3f.pdf) | SW1 (+ spare) |
| Test Points — PCB Test Pins | 9 | $0.10 | $0.90 | Keystone / Various | Test Pin | **Available at Peralta** | - | TP1-TP9 |
| Jumper Wires / Headers / Prototype Leads | assorted | $2.50 | $2.50 | Generic | — | **Available at Peralta** | — | Prototype |
| PCB Standoffs + Mounting Hardware | assorted | $1.50 | $1.50 | Generic | — | **Available at Peralta** | — | — |
| **Estimated TOTAL Cost** |  |  | **$95.48** |  |  |  |  |  |

---
title: Component Selection 
---

# Smart Curtain Subsystem Component Selection

## 1. 5V 1.5A Voltage Regulator (**Power Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **LM7805CT/NOPB**<br>![LM7805CT/NOPB](LM7805CTNOPB.jpeg)<br>Classic 5V linear regulator, widely used, easy to integrate<br>Price: $1.80/each<br>[Product Page](https://www.digikey.com/en/products/detail/texas-instruments/lm7805ct-nopb/3901929?_gl=1*1qyn9bn*_up*MQ..*_gs*MQ..&gclid=CjwKCAjw0sfHBhB6EiwAQtv5qdeTTWOp05cA6KonRds8dxN1djDoBjpO4AzG9BniGVk703AQC1o_YBoCs0UQAvD_BwE&gclsrc=aw.ds&gbraid=0AAAAADrbLlg0dPaLTWZbBCZYg4B1yAzaT)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/lm7800.pdf) | - Simple to use<br>- Widely available<br>- Low cost | - Inefficient<br>- Generates heat<br>- Limited input voltage range |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **TL780-05CKS**<br>![TL780-05CKS](TL780-05KCS.jpeg)<br>5V linear regulator, low noise, robust, standard TO-220 package<br>Price: $2.42/each<br>[Product Page](https://www.digikey.com/en/products/detail/texas-instruments/TL780-05KCS/528597?gclsrc=aw.ds&gad_source=1&gad_campaignid=17922795960&gbraid=0AAAAADrbLlg0dPaLTWZbBCZYg4B1yAzaT&gclid=CjwKCAjw0sfHBhB6EiwAQtv5qdeTTWOp05cA6KonRds8dxN1djDoBjpO4AzG9BniGVk703AQC1o_YBoCs0UQAvD_BwE)<br>[Datasheet](https://www.ti.com/lit/ds/slvs055m/slvs055m.pdf) | - Reliable<br>- Low noise<br>- Easy integration | - Heat generation<br>- Less efficient<br>- Requires heatsink at high current |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu S13V15F5**<br>![S13V15F5](S13V15F5.jpg)<br>5V step-up/step-down switching regulator, efficient, compact<br>Price: $4.95/each<br>[Product Page](https://www.pololu.com/product/4084) | - Energy-efficient<br>- Compact<br>- Wide input voltage range<br>- Built-in protections | - More complex<br>- Requires external components<br>- Higher cost |

**Choice:** Option 1: LM7805CT/NOPB  
**Rationale:** The LM7805 linear voltage regulator is selected for its robust and straightforward design, making it a trusted option for providing a fixed 5V output in a variety of electronic designs. Its low cost, broad availability, and ease of integration allow for fast and reliable implementation. Built-in protection features (thermal shutdown and short-circuit protection) enhance reliability. While the regulator is less efficient and dissipates more heat compared to switching regulators, these drawbacks are acceptable given the manageable load and input-output differential in this application. With proper heatsinking for higher currents, the LM7805 is a proven and practical solution for the Smart Curtain subsystem’s stable 5V power requirement.

---

## 2. Motion Sensor (**Sensing Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **LS6501LP PIR Motion Sensor**<br>![LS6501LP](LS6501LP.jpg)<br>Pyroelectric infrared sensor, adjustable sensitivity and delay time<br>Price: $2.95/each<br>[Product Page](https://www.alldatasheet.com/datasheet-pdf/pdf/71304/LSI/LS6501LP.html)<br>[Datasheet](https://cdn.thomasnet.com/ccp/00417955/110685.pdf) | - Low power<br>- Adjustable sensitivity<br>- Wide detection range<br>- Easy integration | - Limited range<br>- False triggers from pets or heat |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Panasonic EKMB1101111**<br>![EKMB1101111](EKMB1101111.jpg)<br>High-quality PIR sensor, compact, low power<br>Price: $25.85/each<br>[Product Page](https://www.digikey.com/en/products/detail/panasonic-electric-works/EKMB1101111/2601859?gclsrc=aw.ds&gad_source=1&gad_campaignid=17922795960&gbraid=0AAAAADrbLlg0dPaLTWZbBCZYg4B1yAzaT&gclid=CjwKCAjw0sfHBhB6EiwAQtv5qX6lGr1b0ZK4epyarS0EKLv1CeLmPG6pEGe2oNLX_Hw2_tth82XGtBoCTA0QAvD_BwE)<br>[Datasheet](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/2240/EKMB_MC_AMN2_3_Rev_Sep_2012.pdf?_gl=1*1lvusdm*_up*MQ..*_gs*MQ..&gclid=CjwKCAjw0sfHBhB6EiwAQtv5qX6lGr1b0ZK4epyarS0EKLv1CeLmPG6pEGe2oNLX_Hw2_tth82XGtBoCTA0QAvD_BwE&gclsrc=aw.ds&gbraid=0AAAAADrbLlg0dPaLTWZbBCZYg4B1yAzaT) | - Reliable detection<br>- Compact<br>- Low power | - Higher cost<br>- More sensitive to false triggers |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **AM312 Mini PIR Sensor**<br>![AM312](AM312.jpg)<br>Compact, low power, simple interface<br>Price: $1.50/each<br>[Product Page](https://www.alldatasheet.com/datasheet-pdf/pdf/1179499/ETC2/AM312.html)<br>[Datasheet](https://www.image.micros.com.pl/_dane_techniczne_auto/cz%20am312.pdf) | - Very compact<br>- Low cost<br>- Low power | - Shorter range<br>- Less reliable detection |

**Choice:** Option 1: LS6501LP PIR Motion Sensor  
**Rationale:** The  LS6501LP is chosen for its reliable motion detection, adjustable sensitivity, and wide detection range, which suit indoor environments. Its low cost and ease of integration with microcontrollers make it ideal for the Smart Curtain system.  

---

## 3. H-Bridge Motor Driver (**Actuation Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **L298N**<br>![L298N](L298N.jpeg)<br>Dual H-Bridge, high current, easy to find<br>Price: $11.78/each<br>[Product Page](https://www.digikey.com/en/products/detail/stmicroelectronics/L298N/585918)<br>[Datasheet](https://www.st.com/content/ccc/resource/technical/document/datasheet/82/cc/3f/39/0a/29/4d/f0/CD00000240.pdf/files/CD00000240.pdf/jcr:content/translations/en.CD00000240.pdf) | - High current<br>- Widely available<br>- Simple | - Inefficient<br>- Large size<br>- Needs heat sink |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Fairchild FAN8100N**<br>![FAN8100N](FAN8100N.jpeg)<br>Single H-Bridge, efficient, compact driver<br>Price: $1.16/each<br>[Product Page](https://www.digikey.com/en/products/detail/rochester-electronics-llc/FAN8100N/11558200?gclsrc=aw.ds&gad_source=1&gad_campaignid=120565755&gbraid=0AAAAADrbLlhGTyb62df9ti0P1sjNMH4jr&gclid=CjwKCAiAt8bIBhBpEiwAzH1w6ZgXZPSSU_kHKAA3JxQgLP8dpn8R68_7tV_7FHfo61rzrVuWnf3BvhoCdowQAvD_BwE)<br>[Datasheet](https://rocelec.widen.net/view/pdf/1pizbjqffm/FAIRS23777-1.pdf?t.download=true&u=5oefqw) | - Very Efficient<br>- Low heat generation<br>- Good voltage range | - Only a single H-bridge<br>- Lower max current (≈1 A continuous) depending on version |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu DRV8835**<br>![DRV8835](DRV8835.jpg)<br>Dual H-Bridge, compact, efficient, low voltage drop<br>Price: $3.95/each<br>[Product Page](https://www.pololu.com/product/2135)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/drv8835.pdf?ts=1760734543680&ref_url=https%253A%252F%252Fwww.google.com%252F) | - Compact<br>- Efficient<br>- Low voltage drop | - Lower current<br>- Slightly higher cost |

**Choice:** Option 2: FAN8100N  
**Rationale:** I chose the FAN8100N because it gives me the efficiency and small size I need for this project. It doesn’t waste as much power as older drivers like the L298N, and it stays cooler without needing a heat sink.

Even though it’s a single H-bridge, it still works well for the motor setup in this project. It’s also one of the more affordable options, which is helpful for a student project with limited budget. 

---

## 4. Motor (**Actuation Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu 2371 (298:1 Micro Metal Gearmotor MP 6V)**<br>![Pololu 2371 Motor](2371.jpg)<br>DC metal gearmotor, 6V, 298:1 gear ratio, 73 RPM no-load, 2.4 kg·cm stall torque<br>Price: $23.95/each<br>[Product Page](https://www.pololu.com/product/2371)<br>[Datasheet](https://www.pololu.com/file/0J1487/pololu-micro-metal-gearmotors-rev-6-1.pdf) | - High gear ratio (298:1) for high torque at low speed<br>- Extremely compact (10×12×25 mm)<br>- Low weight (9.5 g)<br>- Low current draw (0.07 A no-load, 0.67 A stall)<br>- Reliable metal gearbox<br>- Affordable | - Brushed motor (wear over time)<br>- Requires motor driver<br>- Lower RPM than larger motors<br>- No encoder (open-loop control only) |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu 25D 12V DC Motor**<br>![25D Motor](25D.jpg)<br>Smaller brushed DC motor, 12V, medium torque<br>Price: $9.95/each<br>[Product Page](https://www.pololu.com/product/4840)<br>[Datasheet](https://www.pololu.com/file/0J1829/pololu-25d-metal-gearmotors.pdf) | - Medium torque<br>- Compact<br>- Lower cost | - Lower torque than 37D<br>- Brushed motor<br>- Needs motor driver |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Nidec 12V DC Gear Motor**<br>![DC MOTOR](DC.png)<br>High-quality, compact DC motor with gearbox, long life<br>Price: $19.50/each<br>[Product Page](https://www.omc-stepperonline.com/fr/moteur-a-engrenages-cc-12v-brosse-3-5kg-cm-41rpm-90-1-boite-de-vitesses-droite-sgc37-32125000-g90) | - Affotdable<br>- Compact<br>- Moderate torque | - Lower RPM<br>- Brushed design (wear)<br>- Needs driver |

**Choice:** Option 1: Pololu 2371 (298:1 Micro Metal Gearmotor MP 6V)
**Rationale:** The Pololu 2371 motor is selected for its exceptional compactness (10×12×25 mm), high gear ratio (298:1), and moderate stall torque (2.4 kg·cm), making it ideal for space-constrained applications like smart curtains. Its low weight (9.5 g) and low current draw (0.07 A no-load, 0.67 A stall) ensure minimal power consumption and easy integration into small subsystems. While it is a brushed motor (subject to wear over time), its reliability and affordability make it a practical choice for this project. The lack of an encoder is acceptable for open-loop control scenarios, and the motor's performance is well-matched to the requirements of moving lightweight curtains efficiently.   

---

## 5. 9V 3A Unregulated Power Supply (**Power Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Mean Well GST40A09-P1J**<br>![GST40A](GST40A.jpeg)<br>90W unregulated 9V DC power supply, high reliability<br>Price: $17.30/each<br>[Product Page](https://www.digikey.com/en/products/detail/mean-well-usa-inc/gst40a09-p1j/7703703)<br>[Datasheet](https://www.meanwellusa.com/upload/pdf/GST40A/GST40A-spec.pdf) | - High reliability<br>- Stable output<br>- Protects circuits | - Bulkier<br>- Expensive |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Amazon Basics 9V 3A AC/DC Adapter (B09ZTKTLGW)**<br>![B09ZTKTLGW](B09ZTKTLGW.jpg)<br>regulated output, compact wall-plug design<br>Price: $4.99/each<br>[Product Page](https://www.amazon.com/gp/product/B09ZTKTLGW/) | - Affordable and widely available<br>- Compact, plug-in wall adapter (saves space)<br>- Regulated output ensures stable voltage<br>- Includes standard barrel plug (5.5mm x 2.1mm)<br>- Suitable for continuous operation | - Lower build quality compared to industrial brands<br>- Limited protection features (no explicit overcurrent/short-circuit protection)<br>- Not designed for harsh environments or high-reliability applications<br>- May run warm under full load |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Mean‑Well SGA40E09‑P1J**<br>![SGA40E09](SGA40E09.jpeg)<br>Mean Well SGA40E09-P1J – 40W wall-mount (plug-in) AC/DC adapter, 9 V output, ~4.44 A max<br>Price: $21.47/each<br>[Product Page](https://www.mouser.com/ProductDetail/MEAN-WELL/SGA40E09-P1J?qs=kU9BrJCShyk7JuwjBVtOlQ%3D%3D&srsltid=AfmBOooYPFy-o8z2TKsX1w-nQ8iGEcE8ENDtLzemfdFMs3mg4elY-K3U&utm_source=chatgpt.com)<br>[Datasheet](https://www.stathisnet.gr/image/SpecsUpload/028888.pdf?utm_source=chatgpt.com) | - Slim wall-mounted adapter (plug-in) form factor – simpler installation<br>- 9 V × 4.44 A gives ~40W, plenty margin above 3 A requirement<br>- High efficiency (reduces heat) and modern protections: Overcurrent, Overvoltage, Short-circuit built in | - Being plug-in, less modular for non-standard connector scenarios<br>- Slightly higher cost compared to generic adapters<br>- If input plug standard different (US vs EU), may require adapter or variant|

**Choice:** Option 2: Amazon Basics 9V 3A AC/DC Adapter (B09ZTKTLGW)  
**Rationale:** The Amazon Basics 9V 3A adapter is selected for its affordability, compact plug-in form factor, and regulated output, which ensures stable voltage for the Smart Curtain subsystem. While it lacks the advanced protection features and industrial-grade reliability of the Mean Well GST40A09-P1J, it is sufficient for typical indoor applications and offers a cost-effective solution for prototyping and low-to-moderate reliability requirements. The adapter is widely available, easy to integrate, and meets the project's power needs without unnecessary complexity or expense. For applications requiring higher reliability or continuous operation in demanding environments, the Mean Well GST40A09-P1J remains a superior choice, but for most use cases, the Amazon Basics adapter provides the best balance of performance, cost, and convenience.  

---

## 6. 8-Pin Header Connector (**Interface Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Samtec TSW-108-07-G-D**<br>![TSW-108-07-G-D](TSW.jpeg)<br>8-pin male header, standard spacing, through-hole<br>Price: $0.25/each<br>[Product Page](https://www.digikey.com/en/products/detail/samtec-inc/TSW-108-07-G-D/1101269)<br>[Datasheet](https://suddendocs.samtec.com/catalog_english/tsw_th.pdf) | - Low cost<br>- Easy to solder<br>- Standard pin spacing | - Limited current<br>- Fixed pitch |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Molex 5264-08**<br>![Molex 5264-08](8PIN.jpeg)<br>8-pin header, gold plated, reliable connection<br>Price: $0.60/each<br>[Product Page](https://www.alldatasheet.com/datasheet-pdf/pdf/364145/MOLEX3/5264-08.html?utm_source=chatgpt.com) | - Gold plated<br>- Reliable<br>- Durable | - Higher cost<br>- Slightly larger footprint |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Adafruit 8-Pin Female Header**<br>![Adafruit 8-Pin header](1x8pin.jpg)<br>Compact, easy to connect/disconnect, low cost<br>Price: $0.75/each<br>[Product Page](https://www.peconnectors.com/female-headers-pcb-1x-row-.100/hws1362/?utm_source=googleads&vt_keyword=&gad_source=1&gad_campaignid=1362472447&gbraid=0AAAAAD-J6wS17LPjb4DfaKu2RGIc26OFa&gclid=CjwKCAjw0sfHBhB6EiwAQtv5qWFAyD4anpPkaR8ALUm5_ys46H4IrXHD41NiMca2cL0QQaZzhPHVhRoCa84QAvD_BwE)<br>[Datasheet](https://media.digikey.com/pdf/Data%20Sheets/Adafruit%20PDFs/4156_Web.pdf?utm_source=chatgpt.com) | - Compact<br>- Easy connection<br>- Low cost | - Limited durability<br>- Less secure connection |

**Choice:** Option 2: Molex 5264-08  
**Rationale:** The Molex 5264-08 is gold-plated and durable, providing reliable connectivity for repeated connections in the Smart Curtain subsystem. Although slightly more expensive than generic headers, its long-term reliability and secure fit justify the choice.  

---

## 7. Rail-to-Rail Operational Amplifier (**Signal Conditioning Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Microchip MCP6004**<br>![MCP6004](MCP6004.jpeg)<br>Low-power quad op-amp, rail-to-rail input/output, works down to 1.8V<br>Price: $0.59/each<br>[Product Page](https://www.digikey.com/en/products/detail/microchip-technology/MCP6004-I-P/523060?gclsrc=aw.ds&gad_source=1&gad_campaignid=120565755&gbraid=0AAAAADrbLlg_24iN2813sblIMHGUcLC7a&gclid=CjwKCAiAt8bIBhBpEiwAzH1w6Vaqri7AJgq_Qog2UruTg01JcK50EXqvQ4hn7cYdWnhzatUY0awy_xoCaowQAvD_BwE)<br>[Datasheet](https://ww1.microchip.com/downloads/en/DeviceDoc/MCP6001-1R-1U-2-4-1-MHz-Low-Power-Op-Amp-DS20001733L.pdf) | - Very low power<br>- Stable for unity-gain buffer<br>- Clean output for ADC<br>- Quad Op-amp (extra channels available)<br>- Rail-to-rail, perfect for 3.3V systems | - Requires good PCB layout for best performance<br>- Not designed for high-speed signals |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **STMicroelectronics LM358N**<br>![STMicroelectronics LM358N](LM358N.jpeg)<br>Classic dual op-amp, extremely common, low cost<br>Price: $0.97/each<br>[Product Page](https://www.digikey.com/en/products/detail/stmicroelectronics/LM358N/591694)<br>[Datasheet](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/1085/LM158%2C258%2C358.pdf)| - Very cheap<br>- Easy to find<br>- Works well at low frequency | - Not rail-to-rail, so output cannot reach 0V or 3.3V<br>- Poor for ADC buffering at 3.3V<br>- Higher input offset |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Texas Instruments OPA344PA**<br>![Texas Instruments OPA344PA](OPA344PA.jpeg)<br>High-quality rail-to-rail op-amp, very low noise, single channel<br>Price: $0.99/each<br>[Product Page](https://www.digikey.com/en/products/detail/texas-instruments/OPA344PA/362265)<br>[Datasheet](https://rocelec.widen.net/view/pdf/fsllthxnf6/sbos107a.pdf?t.download=true&u=5oefqw) | - Excellent accuracy<br>- Rail-to-rail<br>- Very low noise | - Only one channel per package<br>- Higher cost<br>- More performance than needed for a simple buffer |

**Choice:** Option 1: MCP6004  
**Rationale:** I chose the MCP6004 because it matches exactly what my circuit needs for conditioning the motion sensor signal before it goes into the PIC ADC. Since my system runs at 3.3V, having a rail-to-rail op-amp is really important—otherwise the ADC wouldn’t see the full range of the signal.

The MCP6004 is also low-power, stable as a unity-gain buffer, and gives me extra channels I can use later if we want to add more sensors. Even though there are cheaper options like the LM358, they don’t perform well at 3.3V. The OPA344 is high quality, but more expensive and only single-channel, so the MCP6004 gives the best balance for this project. 

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

**Choice:** Option 3: Pololu S13V15F5  
**Rationale:** The Pololu S13V15F5 is a switching regulator, making it highly energy-efficient and reducing heat. Its wide input range ensures a stable 5V output from a 9V supply, protecting sensitive electronics. Although slightly more expensive and needing external components, its compact size and built-in protections make it ideal for the Smart Curtain subsystem.  

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
| **TB6612FNG**<br>![TB6612FNG](TB6612FNG.jpg)<br>Dual H-Bridge, 1.2A per channel, low voltage drop, efficient<br>Price: $5.95/each<br>[Product Page](https://www.pololu.com/product/713)<br>[Datasheet](https://cdn.sparkfun.com/datasheets/Robotics/TB6612FNG.pdf) | - Efficient<br>- Low voltage drop<br>- Compact<br>- Easy integration | - Lower current than L298N<br>- Needs heat dissipation for higher loads |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu DRV8835**<br>![DRV8835](DRV8835.jpg)<br>Dual H-Bridge, compact, efficient, low voltage drop<br>Price: $3.95/each<br>[Product Page](https://www.pololu.com/product/2135)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/drv8835.pdf?ts=1760734543680&ref_url=https%253A%252F%252Fwww.google.com%252F) | - Compact<br>- Efficient<br>- Low voltage drop | - Lower current<br>- Slightly higher cost |

**Choice:** Option 2: TB6612FNG  
**Rationale:** The TB6612FNG offers efficient dual H-Bridge operation with low voltage drop, sufficient for the curtain motor. Its compact size and ease of integration make it preferable over the larger, less efficient L298N.  

---

## 4. Motor (**Actuation Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu 37D 12V DC Motor**<br>![37D Motor](37D.jpg)<br>Compact brushed DC motor, 12V, high torque, metal gearbox<br>Price: $14.95/each<br>[Product Page](https://www.pololu.com/product/1105)<br>[Datasheet](https://www.pololu.com/file/0J1706/pololu-37d-metal-gearmotors.pdf) | - High torque<br>- Compact size<br>- Reliable performance | - Brushed motor (wear over time)<br>- Requires motor driver |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu 25D 12V DC Motor**<br>![25D Motor](25D.jpg)<br>Smaller brushed DC motor, 12V, medium torque<br>Price: $9.95/each<br>[Product Page](https://www.pololu.com/product/4840)<br>[Datasheet](https://www.pololu.com/file/0J1829/pololu-25d-metal-gearmotors.pdf) | - Medium torque<br>- Compact<br>- Lower cost | - Lower torque than 37D<br>- Brushed motor<br>- Needs motor driver |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Nidec 12V DC Gear Motor**<br>![DC MOTOR](DC.png)<br>High-quality, compact DC motor with gearbox, long life<br>Price: $19.50/each<br>[Product Page](https://www.omc-stepperonline.com/fr/moteur-a-engrenages-cc-12v-brosse-3-5kg-cm-41rpm-90-1-boite-de-vitesses-droite-sgc37-32125000-g90) | - Affotdable<br>- Compact<br>- Moderate torque | - Lower RPM<br>- Brushed design (wear)<br>- Needs driver |

**Choice:** Option 1: Pololu 37D 12V DC Motor  
**Rationale:** The 37D motor provides high torque in a compact, reliable form factor, making it suitable for moving curtains efficiently. Its size and performance balance cost and durability better than the smaller or more expensive alternatives.  

---

## 5. 9V 3A Unregulated Power Supply (**Power Subsystem**)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Mean Well GST40A09-P1J**<br>![GST40A](GST40A.jpeg)<br>90W unregulated 9V DC power supply, high reliability<br>Price: $17.30/each<br>[Product Page](https://www.digikey.com/en/products/detail/mean-well-usa-inc/gst40a09-p1j/7703703)<br>[Datasheet](https://www.meanwellusa.com/upload/pdf/GST40A/GST40A-spec.pdf) | - High reliability<br>- Stable output<br>- Protects circuits | - Bulkier<br>- Expensive |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **DP4009N2M**<br>![DP4009N2M](DP4009N2M.jpg)<br>C/DC desktop adapter, 9 V output, part of “DP40” 40 W series from Artesyn / Emerson (also marketed under DP4009N2M)<br>Price: $35.12/each<br>[Product Page](https://www.digikey.com/en/products/detail/artesyn-advanced-energy/DP4009N2M/2203577?utm_source=chatgpt.com)<br>[Datasheet](https://mm.digikey.com/Volume0/opasdata/d220001/medias/docus/511/DP40_Series.pdf) | - Fully regulated 9 V output across wide AC input (90-264 VAC)<br>- 40 W power capacity gives margin for 3 A requirement (9×3=27W)<br>- Medical/ITE safeties, high quality external adapter design | - Less reliable<br>- Desktop adapter form factor may be bulkier than slim wall plug-in form<br>- Possibly higher cost for the spec, and may require external wiring (cord not included) |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Mean‑Well SGA40E09‑P1J**<br>![SGA40E09](SGA40E09.jpeg)<br>Mean Well SGA40E09-P1J – 40W wall-mount (plug-in) AC/DC adapter, 9 V output, ~4.44 A max<br>Price: $21.47/each<br>[Product Page](https://www.mouser.com/ProductDetail/MEAN-WELL/SGA40E09-P1J?qs=kU9BrJCShyk7JuwjBVtOlQ%3D%3D&srsltid=AfmBOooYPFy-o8z2TKsX1w-nQ8iGEcE8ENDtLzemfdFMs3mg4elY-K3U&utm_source=chatgpt.com)<br>[Datasheet](https://www.stathisnet.gr/image/SpecsUpload/028888.pdf?utm_source=chatgpt.com) | - Slim wall-mounted adapter (plug-in) form factor – simpler installation<br>- 9 V × 4.44 A gives ~40W, plenty margin above 3 A requirement<br>- High efficiency (reduces heat) and modern protections: Overcurrent, Overvoltage, Short-circuit built in | - Being plug-in, less modular for non-standard connector scenarios<br>- Slightly higher cost compared to generic adapters<br>- If input plug standard different (US vs EU), may require adapter or variant|

**Choice:** Option 1: Mean Well GST40A09-P1J  
**Rationale:** The Mean Well GST40A09-P1J provides a reliable and stable 9V 3A output, essential for powering the Smart Curtain subsystem safely. Its higher cost is justified by durability and protection features, which are crucial for continuous operation.  

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

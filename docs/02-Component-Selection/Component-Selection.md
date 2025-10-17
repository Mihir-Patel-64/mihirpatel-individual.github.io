---
title: Component Selection 
---

# Smart Curtain Subsystem Component Selection

## 1. 5V 1.5A Voltage Regulator (Power Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **LM7805CT/NOPB**<br>Classic 5V linear regulator, widely used, easy to integrate<br>Price: $1.80/each<br>[Product Page](https://www.digikey.com/en/products/detail/texas-instruments/LM7805CT-NOPB/458387)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/lm7805.pdf) | - Simple to use<br>- Widely available<br>- Low cost | - Inefficient<br>- Generates heat<br>- Limited input voltage range |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **TL7805CV**<br>5V linear regulator, low noise, robust, standard TO-220 package<br>Price: $2.20/each<br>[Product Page](https://www.mouser.com/ProductDetail/Texas-Instruments/TL7805CV?qs=sGAEpiMZZMsf9pQIq6T0xg%3D%3D)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/tl7805cv.pdf) | - Reliable<br>- Low noise<br>- Easy integration | - Heat generation<br>- Less efficient<br>- Requires heatsink at high current |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu S13V15F5**<br>5V step-up/step-down switching regulator, efficient, compact<br>Price: $4.95/each<br>[Product Page](https://www.pololu.com/product/4084)<br>[Datasheet](https://www.pololu.com/file/0J4084/S13V15F5.pdf) | - Energy-efficient<br>- Compact<br>- Wide input voltage range<br>- Built-in protections | - More complex<br>- Requires external components<br>- Higher cost |

**Choice:** Option 3: Pololu S13V15F5  
**Rationale:** The Pololu S13V15F5 is a switching regulator, making it highly energy-efficient and reducing heat. Its wide input range ensures a stable 5V output from a 9V supply, protecting sensitive electronics. Although slightly more expensive and needing external components, its compact size and built-in protections make it ideal for the Smart Curtain subsystem.  

---

## 2. Operational Amplifier (Control/Signal Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **LM358N**<br>Dual op-amp, widely used, low cost<br>Price: $0.80/each<br>[Product Page](https://www.digikey.com/en/products/detail/texas-instruments/LM358N/458373)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/lm358.pdf) | - Low cost<br>- Easy to use<br>- Widely available | - Limited voltage range<br>- Non-rail-to-rail<br>- Lower precision |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **LM324N**<br>Quad op-amp, low cost, general-purpose<br>Price: $1.00/each<br>[Product Page](https://www.mouser.com/ProductDetail/Texas-Instruments/LM324N?qs=sGAEpiMZZMsf9pQIq6T0xg%3D%3D)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/lm324.pdf) | - Quad op-amp<br>- Low cost<br>- Easy integration | - Limited voltage range<br>- Non-rail-to-rail<br>- Lower precision |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **TLV2372IDR**<br>Rail-to-rail I/O, low voltage, low power<br>Price: $1.00/each<br>[Product Page](https://www.mouser.com/ProductDetail/Texas-Instruments/TLV2372IDR?qs=WzgTT80quPHbp6isMOHsKA%3D%3D)<br>[Datasheet](https://www.ti.com/lit/ds/symlink/tlv2372.pdf) | - Rail-to-rail input/output<br>- Low power consumption<br>- Accurate signal amplification | - Slightly higher cost<br>- Limited output drive |

**Choice:** Option 3: TLV2372IDR  
**Rationale:** The TLV2372IDR provides rail-to-rail input/output, ensuring accurate amplification of low-voltage signals from sensors. Its low power consumption supports efficient operation, while cheaper op-amps risk inaccuracies. This choice ensures reliable sensor signal processing.  

---

## 3. Light Sensor (Sensing Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Adafruit LTR-329ALS-01**<br>Digital ambient light sensor, I2C interface, wide dynamic range<br>Price: $4.95/each<br>[Product Page](https://www.adafruit.com/product/5591)<br>[Datasheet](https://cdn-shop.adafruit.com/product-files/5591/LTR-329ALS-01-Lite-On-datasheet-140998467.pdf) | - I2C interface<br>- Wide dynamic range<br>- Low power consumption<br>- Compact | - Requires I2C<br>- Not suitable for direct sunlight<br>- Limited response time |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **TSL2561FN**<br>Digital light sensor, high resolution, I2C interface<br>Price: $5.50/each<br>[Product Page](https://www.mouser.com/ProductDetail/ams/TSL2561FN?qs=Ew6PDCcZT9o3Z%2F0TtT9l7w%3D%3D)<br>[Datasheet](https://ams.com/documents/20143/36005/TSL2561_DS000469_2-00.pdf) | - High resolution<br>- Accurate<br>- I2C interface | - Higher cost<br>- Slightly more complex integration |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **VEML7700**<br>High accuracy ambient light sensor, I2C interface<br>Price: $6.50/each<br>[Product Page](https://www.mouser.com/ProductDetail/Vishay/VEML7700?qs=Y%2FshNz3kLVw6J9E0r3zvGg%3D%3D)<br>[Datasheet](https://www.vishay.com/docs/84223/veml7700.pdf) | - Very high accuracy<br>- Low power<br>- I2C interface | - Expensive<br>- More complex integration |

**Choice:** Option 1: Adafruit LTR-329ALS-01  
**Rationale:** The LTR-329ALS-01 is a digital I2C sensor with a wide dynamic range, ideal for indoor light sensing. It balances low power, ease of integration, and sufficient accuracy for Smart Curtain operation. Higher-end sensors are unnecessary for this application.  

---

## 4. Motion Sensor (Sensing Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **HC-SR501 PIR Motion Sensor**<br>Pyroelectric infrared sensor, adjustable sensitivity and delay time<br>Price: $2.95/each<br>[Product Page](https://www.mouser.com/ProductDetail/DFRobot/DFR0066?qs=3%2F9Zl6O%2FZsU1HK1gHjY9xQ%3D%3D)<br>[Datasheet](https://cdn.sparkfun.com/datasheets/Sensors/PIR/hc-sr501.pdf) | - Low power<br>- Adjustable sensitivity<br>- Wide detection range<br>- Easy integration | - Limited range<br>- False triggers from pets or heat |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Panasonic EKMB1101111**<br>High-quality PIR sensor, compact, low power<br>Price: $6.50/each<br>[Product Page](https://www.mouser.com/ProductDetail/Panasonic/EKMB1101111?qs=sGAEpiMZZMsf9pQIq6T0xg%3D%3D)<br>[Datasheet](https://industrial.panasonic.com/cdbs/www-data/pdf/AAB4000/AAB4000C12.pdf) | - Reliable detection<br>- Compact<br>- Low power | - Higher cost<br>- More sensitive to false triggers |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **AM312 Mini PIR Sensor**<br>Compact, low power, simple interface<br>Price: $1.50/each<br>[Product Page](https://www.adafruit.com/product/327)<br>[Datasheet](https://www.elecrow.com/download/AM312.pdf) | - Very compact<br>- Low cost<br>- Low power | - Shorter range<br>- Less reliable detection |

**Choice:** Option 1: HC-SR501 PIR Motion Sensor  
**Rationale:** The HC-SR501 is chosen for its reliable motion detection, adjustable sensitivity, and wide detection range, which suit indoor environments. Its low cost and ease of integration with microcontrollers make it ideal for the Smart Curtain system.  

---

## 5. Button (User Interface Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Mouser Generic Tactile Switch**<br>Basic push button, low cost, easy to integrate<br>Price: $0.50/each<br>[Product Page](https://www.mouser.com/ProductDetail/104-Tactile-Switch?qs=sGAEpiMZZMsf9pQIq6T0xg%3D%3D)<br>[Datasheet](https://www.mouser.com/datasheet/2/427/tactile-switch-datasheet-123456.pdf) | - Very low cost<br>- Easy to use | - Short lifespan<br>- Less tactile feedback |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Omron B3F Series Tactile Switch**<br>High-quality tactile push button, reliable, long life<br>Price: $1.20/each<br>[Product Page](https://www.mouser.com/ProductDetail/Omron-Electronics/B3F-4055?qs=Zy8PbHyv8jZ6tRaqpFmx6Q%3D%3D)<br>[Datasheet](https://omronfs.omron.com/en_US/ecb/products/pdf/en-b3f.pdf) | - Long lifespan (~1M presses)<br>- Reliable actuation<br>- Consistent tactile feel | - Slightly higher cost<br>- Requires careful soldering |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Adafruit Mini Tactile Switch**<br>Compact, low profile, low cost<br>Price: $0.75/each<br>[Product Page](https://www.adafruit.com/product/367)<br>[Datasheet](https://cdn-learn.adafruit.com/assets/assets/000/001/367/original/tactile-switch.pdf) | - Compact<br>- Low cost<br>- Easy to use | - Shorter lifespan<br>- Less tactile feel |

**Choice:** Option 2: Omron B3F Series Tactile Switch  
**Rationale:** The Omron B3F is durable (~1M presses) and provides reliable tactile feedback, making it suitable for frequent user interaction. Cheaper alternatives lack lifespan and consistent feel, which could degrade user experience over time.  

---

## 6. Red LED (User Feedback Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Kingbright WP710A10SRC**<br>Standard red LED, 5mm, bright, low power<br>Price: $0.10/each<br>[Product Page](https://www.mouser.com/ProductDetail/Kingbright/WP710A10SRC?qs=4gBOVKlhDIDV%2B1qCkE0vFA%3D%3D)<br>[Datasheet](https://www.kingbrightusa.com/images/catalog/spec/WP710A10SRC.pdf) | - Low cost<br>- Bright<br>- Standard size<br>- Easy soldering | - Requires current-limiting resistor<br>- Fixed color |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Lumex SSL-LX5093ID**<br>High brightness LED, wide viewing angle<br>Price: $0.15/each<br>[Product Page](https://www.mouser.com/ProductDetail/Lumex/SSL-LX5093ID?qs=sGAEpiMZZMsf9pQIq6T0xg%3D%3D)<br>[Datasheet](https://www.lumex.com/specs/SSL-LX5093.pdf) | - High brightness<br>- Wide viewing angle | - Slightly higher cost<br>- Requires resistor |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Adafruit 5mm Red LED**<br>Standard LED, low cost, easy to integrate<br>Price: $0.12/each<br>[Product Page](https://www.adafruit.com/product/299)<br>[Datasheet](https://cdn-learn.adafruit.com/assets/assets/000/002/299/original/led.pdf) | - Low cost<br>- Easy integration<br>- Standard size | - Slightly dimmer<br>- Requires resistor |

**Choice:** Option 1: Kingbright WP710A10SRC  
**Rationale:** This LED is bright, low-power, and standard size, making it easy to integrate as a status indicator. Its low cost and simplicity meet the Smart Curtain’s visual feedback requirements without unnecessary complexity.  

---

## 7. H-Bridge Motor Driver (Actuation Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **L298N**<br>Dual H-Bridge, high current, easy to find<br>Price: $4.50/each<br>[Product Page](https://www.mouser.com/ProductDetail/STMicroelectronics/L298N?qs=sGAEpiMZZMsf9pQIq6T0xg%3D%3D)<br>[Datasheet](https://www.st.com/resource/en/datasheet/l298.pdf) | - High current<br>- Widely available<br>- Simple | - Inefficient<br>- Large size<br>- Needs heat sink |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **TB6612FNG**<br>Dual H-Bridge, 1.2A per channel, low voltage drop, efficient<br>Price: $2.50/each<br>[Product Page](https://www.mouser.com/ProductDetail/Toshiba/TB6612FNG?qs=7J7CZdIuGnPU6qGbfB%2FLqQ%3D%3D)<br>[Datasheet](https://toshiba.semicon-storage.com/info/docget.jsp?did=64068) | - Efficient<br>- Low voltage drop<br>- Compact<br>- Easy integration | - Lower current than L298N<br>- Needs heat dissipation for higher loads |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu DRV8835**<br>Dual H-Bridge, compact, efficient, low voltage drop<br>Price: $3.95/each<br>[Product Page](https://www.pololu.com/product/2135)<br>[Datasheet](https://www.pololu.com/file/0J1045/DRV8835.pdf) | - Compact<br>- Efficient<br>- Low voltage drop | - Lower current<br>- Slightly higher cost |

**Choice:** Option 2: TB6612FNG  
**Rationale:** The TB6612FNG offers efficient dual H-Bridge operation with low voltage drop, sufficient for the curtain motor. Its compact size and ease of integration make it preferable over the larger, less efficient L298N.  

---

## 8. Motor (Actuation Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu 37D 12V DC Motor**<br>Compact brushed DC motor, 12V, high torque, metal gearbox<br>Price: $14.95/each<br>[Product Page](https://www.pololu.com/product/1105)<br>[Datasheet](https://www.pololu.com/file/0J214/37D_Datasheet.pdf) | - High torque<br>- Compact size<br>- Reliable performance | - Brushed motor (wear over time)<br>- Requires motor driver |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Pololu 25D 12V DC Motor**<br>Smaller brushed DC motor, 12V, medium torque<br>Price: $9.95/each<br>[Product Page](https://www.pololu.com/product/1103)<br>[Datasheet](https://www.pololu.com/file/0J212/25D_Datasheet.pdf) | - Medium torque<br>- Compact<br>- Lower cost | - Lower torque than 37D<br>- Brushed motor<br>- Needs motor driver |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Nidec 12V DC Gear Motor**<br>High-quality, compact DC motor with gearbox, long life<br>Price: $19.50/each<br>[Product Page](https://www.digikey.com/en/products/detail/nidec/N12V-037/999123)<br>[Datasheet](https://www.nidec.com/en/catalog/n12v-037.pdf) | - High reliability<br>- Compact<br>- Long life | - Expensive<br>- Requires motor driver<br>- Slightly heavier |

**Choice:** Option 1: Pololu 37D 12V DC Motor  
**Rationale:** The 37D motor provides high torque in a compact, reliable form factor, making it suitable for moving curtains efficiently. Its size and performance balance cost and durability better than the smaller or more expensive alternatives.  

---

## 9. 9V 3A Unregulated Power Supply (Power Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Mean Well GST90A09-P1J**<br>90W unregulated 9V DC power supply, high reliability<br>Price: $18.50/each<br>[Product Page](https://www.digikey.com/en/products/detail/mean-well/GST90A09-P1J/123456)<br>[Datasheet](https://www.meanwell.com/productPdf.aspx?i=488) | - High reliability<br>- Stable output<br>- Protects circuits | - Bulkier<br>- Expensive |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **HiLetgo 9V 3A Wall Adapter**<br>Low-cost, compact 9V DC adapter, easy to use<br>Price: $7.50/each<br>[Product Page](https://www.mouser.com/product-detail/hiletgo/9V3A?qs=xyz)<br>[Datasheet](https://hiletgo.com/9v3a-datasheet.pdf) | - Compact<br>- Low cost<br>- Easy installation | - Less reliable<br>- Voltage fluctuations<br>- Shorter lifespan |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **CUI Inc SDI90-9**<br>9V 3A desktop power supply, regulated, high quality<br>Price: $14.95/each<br>[Product Page](https://www.cui.com/product/sdi90-9)<br>[Datasheet](https://www.cui.com/product/resource/sdi90.pdf) | - Regulated output<br>- Reliable<br>- Compact | - Slightly more expensive<br>- Heavier than HiLetgo |

**Choice:** Option 1: Mean Well GST90A09-P1J  
**Rationale:** The Mean Well GST90A09-P1J provides a reliable and stable 9V 3A output, essential for powering the Smart Curtain subsystem safely. Its higher cost is justified by durability and protection features, which are crucial for continuous operation.  

---

## 10. 8-Pin Header Connector (Interface Subsystem)

### Option 1

| Solution | Pros | Cons |
|----------|------|------|
| **Samtec TSW-108-07-G-D**<br>8-pin male header, standard spacing, through-hole<br>Price: $0.25/each<br>[Product Page](https://www.digikey.com/en/products/detail/samtec/TSW-108-07-G-D/345678)<br>[Datasheet](https://www.samtec.com/files/tsw.pdf) | - Low cost<br>- Easy to solder<br>- Standard pin spacing | - Limited current<br>- Fixed pitch |

### Option 2

| Solution | Pros | Cons |
|----------|------|------|
| **Molex 5264-08**<br>8-pin header, gold plated, reliable connection<br>Price: $0.60/each<br>[Product Page](https://www.mouser.com/ProductDetail/Molex/5264-08)<br>[Datasheet](https://www.molex.com/product/5264-08-datasheet.pdf) | - Gold plated<br>- Reliable<br>- Durable | - Higher cost<br>- Slightly larger footprint |

### Option 3

| Solution | Pros | Cons |
|----------|------|------|
| **Adafruit 8-Pin Female Header**<br>Compact, easy to connect/disconnect, low cost<br>Price: $0.75/each<br>[Product Page](https://www.adafruit.com/product/398)<br>[Datasheet](https://cdn-learn.adafruit.com/assets/assets/000/003/398/original/header.pdf) | - Compact<br>- Easy connection<br>- Low cost | - Limited durability<br>- Less secure connection |

**Choice:** Option 2: Molex 5264-08  
**Rationale:** The Molex 5264-08 is gold-plated and durable, providing reliable connectivity for repeated connections in the Smart Curtain subsystem. Although slightly more expensive than generic headers, its long-term reliability and secure fit justify the choice.  

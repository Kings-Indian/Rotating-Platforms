# Rotating Platforms Project

## Project Description
This project creates a mechanical rotating platform system designed to provide funni rotational movement. The system consists of multiple platforms that can rotate independently or in coordination, powered by motor-driven mechanisms with control through an L298N H-bridge motor driver.

## Why I Made This Project
I wanted to create a mechanical system that demonstrates controlled rotational movement with multiple platforms. This allows me to rotate funni oiia oiia cat and anything else I want, including 2 oiia oiia cats. 
## Project Components

### 3D Model Screenshots
![Full 3D Assembly](https://github.com/user-attachments/assets/a1fb50f3-7028-4a45-bc44-f274d637174f)
*Complete assembly showing the rotating platform system*

### Technical Specifications

- **Platform Diameter**: 58.53mm (scaled from 80mm design)
- **Material**: 3D printed components
- **Control System**: ESP32 microcontroller with L298N H-bridge motor driver
- **Power**: 7.2V NiMH battery pack (3000mAh)
- **Connectivity**: WiFi and Bluetooth capabilities

## Bill of Materials (BOM)

| Item No. | Component | Quantity | Description | Link | Cost |
|----------|-----------|----------|-------------|------|------|
| 1 | ESP-WROOM-32 Development Board | 1 | Main microcontroller with WiFi + Bluetooth | [Amazon](https://www.amazon.com/gp/product/B08D5ZD528/?th=1) | $15.99 |
| 2 | HiLetgo L298N Motor Driver Module | 1 | Motor driver for controlling DC motors | [Amazon](https://www.amazon.com/gp/product/B07BK1QL5T/) | $11.49 |
| 3 | GEILIENERGY 7.2V 3000mAh NiMH Battery Pack | 1 | Main power source for motors | [Amazon](https://www.amazon.com/dp/B0C5WXWWH3/) | $14.79 |
| 4 | uxcell DC12V 100RPM Electric Motor (Pack of 2) | 1 | DC motors for platform rotation | [Amazon](https://www.amazon.com/uxcell-DC12V-100RPM-Electric-Motor/dp/B00YFZJ3A0) | $12.99 |
| 5 | 120pcs Breadboard Jumper Wire Set | 1 | For electrical connections | [Amazon](https://www.amazon.com/120pcs-Breadboard-Jumper-Wire-Set/dp/B01L5ULRUA) | $7.99 |
| 6 | Assorted Machine Screws Nuts Washers Kit | 1 | Mounting hardware for assembly | [Amazon](https://www.amazon.com/Assorted-Machine-Screws-Nuts-Washers/dp/B01N5IB20Q) | $9.99 |
| 7 | Breadboard Solderless Prototype Board | 1 | For prototyping electrical connections | [Amazon](https://www.amazon.com/Breadboard-Solderless-Prototype-Electronics-Project/dp/B01EV6LJ7G) | $6.99 |
| 8 | Motor Mount Bracket for DC Motor (Pack of 2) | 1 | To secure motors to the platform | [Amazon](https://www.amazon.com/Motor-Mount-Bracket-DC-Motor/dp/B07DGR98VQ) | $8.99 |
| 9 | Electrical Connectors Terminal Block Set | 1 | For secure electrical connections | [Amazon](https://www.amazon.com/Electrical-Connectors-Terminal-Block-Set/dp/B07CQ8J8XK) | $12.99 |
| 10 | Polymaker PETG Filament 1kg | 1 | Clear PETG filament for 3D printing platforms | [Amazon](https://www.amazon.com/dp/B09DKMCNMW?tag=all3dptrx00131-20&th=1) | $22.99 |

**Total Project Cost: $125.20**

## Project Status
- ✅ 3D Design Complete
- ✅ Assembly Design Verified
- 🔄 Component Sourcing
- ⏳ Electrical Assembly
- ⏳ Testing and Calibration

## Files Included
- `JOURNAL.md` - Detailed development log with daily progress
- `BOM.csv` - Bill of materials with component links
- `LICENSE` - Project license information
- CAD source files (to be added)
- PCB design files (if applicable)

## Getting Started
1. Review the BOM.csv file for component sourcing
2. 3D print the platform components
3. Assemble the mechanical system
4. Wire the electrical components according to wiring_diagram.md
5. Upload control code to ESP32
6. Test and calibrate the system
7. Charge the NiMH battery pack before first use

## License
This project is licensed under the terms specified in the LICENSE file. 
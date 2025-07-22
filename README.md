# Rotating Platforms Project

## Project Description
This project creates a mechanical rotating platform system designed to provide controlled rotational movement. The system consists of multiple platforms that can rotate independently or in coordination, powered by motor-driven mechanisms with precise control through an L298N H-bridge motor driver.

## Why I Made This Project
I wanted to create a mechanical system that demonstrates controlled rotational movement with multiple platforms. This project serves as both a learning experience in mechanical design and motor control, as well as a foundation for more complex rotating systems. The ability to control multiple rotating platforms opens up possibilities for various applications in robotics, automation, and educational demonstrations.

## Project Components

### 3D Model Screenshots
![Full 3D Assembly](https://github.com/user-attachments/assets/a1fb50f3-7028-4a45-bc44-f274d637174f)
*Complete assembly showing the rotating platform system*

![Platform Detail](https://github.com/user-attachments/assets/8bf5a0f3-39f4-438a-85b1-ceb4d5e0e463)
*Detailed view of individual rotating platforms*

### CAD Model Features
- **Platform Design**: Circular platforms with integrated mounting holes
- **Motor Integration**: Space allocated for L298N H-bridge motor driver
- **Center Peg System**: Stabilizing mechanism to prevent platforms from spinning off
- **Scalable Components**: Modular design allowing for easy customization

### Technical Specifications
- **Platform Diameter**: 58.53mm (scaled from 80mm design)
- **Material**: 3D printed components
- **Control System**: L298N H-bridge motor driver
- **Power**: DC motor system

## Bill of Materials (BOM)

| Component | Quantity | Description | Link |
|-----------|----------|-------------|------|
| L298N H-Bridge Motor Driver | 1 | Dual H-bridge motor driver for bidirectional control | [Amazon](https://www.amazon.com/L298N-Stepper-Motor-Driver-Controller/dp/B014KMHSW6) |
| DC Motors | 2 | 12V DC motors for platform rotation | [Amazon](https://www.amazon.com/uxcell-DC12V-100RPM-Electric-Motor/dp/B00YFZJ3A0) |
| Arduino Uno | 1 | Microcontroller for motor control | [Amazon](https://www.amazon.com/Arduino-Uno-R3-Microcontroller-A000066/dp/B008GRTSV6) |
| 12V Power Supply | 1 | Power source for motors and driver | [Amazon](https://www.amazon.com/ALITOVE-Adapter-Transformer-100V-240V-Converter/dp/B01MZAXY8O) |
| Jumper Wires | 1 set | For electrical connections | [Amazon](https://www.amazon.com/120pcs-Breadboard-Jumper-Wire-Set/dp/B01L5ULRUA) |
| 3D Printed Platform Parts | 2 | Custom designed rotating platforms | N/A (Custom Design) |
| Mounting Hardware | 1 set | Screws, nuts, and mounting brackets | [Amazon](https://www.amazon.com/Assorted-Machine-Screws-Nuts-Washers/dp/B01N5IB20Q) |

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
4. Wire the electrical components
5. Upload control code to Arduino
6. Test and calibrate the system

## License
This project is licensed under the terms specified in the LICENSE file. 
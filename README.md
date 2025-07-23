# Rotating Platforms Project

## Project Description
This project creates a mechanical rotating platform system designed to provide controlled rotational movement. The system consists of multiple platforms that can rotate independently or in coordination, powered by motor-driven mechanisms with precise control through an L298N H-bridge motor driver and ESP32 microcontroller. The system is powered by a portable 7.2V NiMH battery pack for wireless operation.

## Why I Made This Project
I wanted to create a mechanical system that demonstrates controlled rotational movement with multiple platforms. This project serves as both a learning experience in mechanical design and motor control, as well as a foundation for more complex rotating systems. The ability to control multiple rotating platforms opens up possibilities for various applications in robotics, automation, and educational demonstrations. 
## Project Components

### 3D Model Screenshots
![Full 3D Assembly](https://github.com/user-attachments/assets/a1fb50f3-7028-4a45-bc44-f274d637174f)
*Complete assembly showing the rotating platform system*

### Technical Specifications

- **Platform Diameter**: 58.53mm (scaled from 80mm design)
- **Material**: 3D printed components (filament to be sourced separately)
- **Control System**: ESP32 microcontroller with L298N H-bridge motor driver
- **Power**: 7.2V NiMH battery pack (3000mAh)
- **Connectivity**: WiFi and Bluetooth capabilities
- **Total Cost**: $45.07 (electronics only, with NJ tax)

## Bill of Materials (BOM)

| Item No. | Component | Quantity | Link | Cost (USD) | NJ Tax (6.625%) | Total Cost | Running Total |
|----------|-----------|----------|------|------------|----------------|------------|---------------|
| 1 | ESP-WROOM-32 Development Board | 1 | [Amazon](https://www.amazon.com/gp/product/B08D5ZD528/?th=1) | $15.99 | $1.06 | $17.05 | $17.05 |
| 2 | HiLetgo L298N Motor Driver Module | 1 | [Amazon](https://www.amazon.com/gp/product/B07BK1QL5T/) | $11.49 | $0.76 | $12.25 | $29.30 |
| 3 | GEILIENERGY 7.2V 3000mAh NiMH Battery Pack | 1 | [Amazon](https://www.amazon.com/dp/B0C5WXWWH3/) | $14.79 | $0.98 | $15.77 | $45.07 |

**Total Project Cost: $45.07**

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
1. Review the BOM.csv file for component sourcing (electronics only)
2. Source 3D printing filament separately for platform components
3. 3D print the platform components
4. Assemble the mechanical system
5. Wire the electrical components according to wiring_diagram.md
6. Upload control code to ESP32
7. Test and calibrate the system
8. Charge the NiMH battery pack before first use

## License
This project is licensed under the terms specified in the LICENSE file. 
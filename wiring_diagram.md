# Wiring Diagram for Rotating Platforms Project

## Current BOM Components
- ESP-WROOM-32 Development Board
- HiLetgo L298N Motor Driver Module  
- GEILIENERGY 7.2V 3000mAh NiMH Battery Pack

## Electrical Connections

### ESP32 to L298N H-Bridge Connections
- **ESP32 GPIO 2** → **L298N IN1** (Motor 1 Direction Control)
- **ESP32 GPIO 4** → **L298N IN2** (Motor 1 Direction Control)
- **ESP32 GPIO 16** → **L298N IN3** (Motor 2 Direction Control)
- **ESP32 GPIO 17** → **L298N IN4** (Motor 2 Direction Control)
- **ESP32 GPIO 18** → **L298N ENA** (Motor 1 Speed Control - PWM)
- **ESP32 GPIO 19** → **L298N ENB** (Motor 2 Speed Control - PWM)
- **ESP32 GND** → **L298N GND** (Ground Connection)
- **ESP32 3.3V** → **L298N +5V** (Logic Power)

### Battery Pack Connections
- **7.2V NiMH Battery Pack +** → **L298N +12V** (Motor Power)
- **7.2V NiMH Battery Pack -** → **L298N GND** (Power Ground)

### Motor Connections
- **Motor 1 +** → **L298N OUT1**
- **Motor 1 -** → **L298N OUT2**
- **Motor 2 +** → **L298N OUT3**
- **Motor 2 -** → **L298N OUT4**

## Safety Notes
- Always connect ground connections first
- Ensure battery is fully charged before first use
- Use appropriate wire gauge for motor connections
- Double-check all connections before powering on
- NiMH batteries should be charged with appropriate charger

## Additional Components Needed (Not in BOM)
- DC Motors (2x) for platform rotation
- Jumper wires for connections
- Breadboard for prototyping
- Mounting hardware (screws, nuts, brackets)
- 3D printing filament for platform components

## Testing Procedure
1. Connect Arduino to computer and upload test code
2. Verify motor direction with low speed test
3. Test both motors independently
4. Test coordinated movement
5. Adjust speed and timing as needed 
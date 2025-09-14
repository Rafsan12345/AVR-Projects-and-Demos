# AVR Projects and Embedded Systems Examples

## Project Overview
This repository contains a collection of **AVR microcontroller projects** with well-structured, modular, and professional C code. The projects cover a wide range of embedded system applications using **ATmega32 and other AVR series microcontrollers**.

Each project is fully commented and follows datasheet specifications and best engineering practices, making it suitable for **learning, prototyping, and industrial applications**.

## Topics Covered
- **GPIO**: Input/Output configuration, Pull-up/Pull-down, Toggle, Read pin states.
- **Timers & PWM**: 8-bit and 16-bit PWM, frequency and duty cycle control, delay generation.
- **ADC**: Multi-channel analog-to-digital conversion, sensor interfacing (temperature, light, etc.).
- **Interrupts**: External, Timer, Pin Change, ADC interrupts, real-time event handling.
- **USART (UART)**: Serial communication for data transmission and reception.
- **SPI**: Master/Slave communication, peripheral interfacing.
- **I2C / TWI**: EEPROM interfacing, sensor communication.
- **EEPROM**: Internal and external memory read/write.
- **LCD & Keypad**: Character display, custom characters, 4x4 matrix keypad.
- **Motor Control**: DC motor (PWM), Servo motor, Stepper motor.
- **IoT Modules**: W5500 Ethernet, MQTT communication demos.

## Features
- Professional, modular, and well-commented C code.
- Datasheet-compliant implementations.
- Easy to expand and customize.
- Suitable for both beginners and advanced embedded developers.

## Hardware Requirements
- **ATmega Series Microcontrollers** (e.g., ATmega32, ATmega16, ATmega64)
- LEDs, Buttons, Resistors
- 16x2 LCD Display
- Motors, Sensors (Temperature, Light, Motion)
- EEPROM modules (if required)
- SPI/I2C peripherals for communication projects

## Usage
1. Open the project folder for the specific module (e.g., GPIO, PWM, ADC).  
2. Compile the `.c` file using **Atmel Studio** or **AVR-GCC**.  
3. Upload the compiled `.hex` file to the AVR microcontroller.  
4. Connect the required hardware according to the project description.  
5. Observe results (LEDs, Motor, LCD, Sensor readings, Serial Monitor, etc.).

## Repository Structure (Example)

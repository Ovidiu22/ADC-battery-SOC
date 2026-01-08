# ADC-battery-SOC

C library for determining a **battery’s state of charge (SoC)** using the ADC (Analog-to-Digital Converter) on an ATmega328P microcontroller.

This project reads the battery voltage, calculates the state of charge, and displays the result on a **20×4 LCD display**.

---

## Overview

The ADC-battery-SOC library provides a simple and modular interface to:
- Measure battery voltage with the ATmega328P ADC
- Convert the voltage to a percentage representing battery SoC
- Display the result on a connected LCD module

It is designed for **Arduino Nano** over **Atmel Studio**, making it easy to integrate into embedded projects where battery monitoring is required.

---

## Features

- Accurate battery voltage measurement via ADC
- State-of-charge calculation (0–100%)
- Integration with 20×4 LCD displays
- Modular design for reuse in other projects
- Tested on Arduino Nano / ATmega328P

---

## Hardware / Environment

- **Microcontroller:** ATmega328P (Arduino Nano)  
- **Development environment:** Atmel Studio  
- **Display:** LCD 20×4 (HD44780-compatible)  
- **Power source:** Single-cell battery (or equivalent)  

---

## Usage

1. Connect the battery voltage to an ADC pin (with voltage divider if needed).  
2. Connect the 20×4 LCD to the microcontroller using the LCD library.  
3. Initialize the ADC and LCD in your project.  
4. Call the library functions to read the battery voltage and display the state of charge.

> Refer to the source code for function definitions and example usage.

---

## Status

✔️ **Stable** — tested on Arduino Nano with 20×4 LCD.

---

## License

This project is open-source and intended for **educational and embedded development use**.

---

## Schematics

![Schematic](https://user-images.githubusercontent.com/75970114/150407231-4d616aa8-403b-45c6-839e-17ec09bda87d.png)

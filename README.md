# STM32 Motor Control

## Description

This project implements a modular motor control system for the STM32F401CC (BlackPill) using Arduino IDE.

The project supports three motor drivers:

- L298N
- Cytron MD10A
- BTS7960

The code is organized using C++ OOP to provide a common interface for different motor drivers.

## Features

- Forward, backward, and stop control
- PWM speed control
- Speed limitation from -255 to 255
- Modular project structure
- C++ inheritance and polymorphism
- Separate files for each motor driver
- Git version control with multiple commits

## Motor Drivers

### L298N

- IN1 → Direction
- IN2 → Direction
- ENA → PWM speed control

### Cytron MD10A

- DIR → Direction
- PWM → Speed control

### BTS7960

- RPWM → Forward PWM
- LPWM → Backward PWM

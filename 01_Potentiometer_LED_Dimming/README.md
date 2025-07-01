# 01 Potentiometer LED Dimming

## Project Overview

This Arduino project demonstrates how to control the brightness of an LED using a potentiometer. By reading the analog input from the potentiometer and mapping it to a PWM output, the LED's brightness changes in real-time as you turn the knob.

## Hardware Requirements

- Arduino UNO R3 board  
- LED × 1  
- 220Ω resistor 
- Potentiometer × 1  
- Breadboard and jumper wires  

## Circuit Connection

- LED long leg → Arduino digital pin 9  
- LED short leg → GND  
- Potentiometer middle pin → A0 (analog input)  
- Potentiometer side pins → 5V and GND  

## Code Explanation

- Read the analog voltage from the potentiometer using `analogRead(A0)`  
- Map the voltage (0~1023) to a PWM value (0~255) using `map()`  
- Output the PWM signal to control LED brightness via `analogWrite(9, brightness)`  
- Print voltage and brightness values to the Serial Monitor for real-time observation  

## Key Learnings

- Basic use of `analogRead()` for reading analog input  
- Applying `analogWrite()` for PWM output control  
- Understanding `map()` function for data scaling  
- Hands-on practice with LED brightness adjustment  

## Additional Notes

This project is part of my Arduino Learning Series and serves as a fundamental example of analog input and output control.  

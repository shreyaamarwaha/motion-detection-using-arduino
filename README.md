# Arduino Ultrasonic Sensor Distance Measurement

This repository contains an Arduino sketch for measuring distance using the HC-SR04 ultrasonic sensor.

## Overview

The HC-SR04 ultrasonic sensor is a popular module for measuring distance with Arduino projects. This sketch demonstrates how to interface the HC-SR04 sensor with an Arduino board to measure distance accurately.

HC-SR04 Ultrasonic Sensor Pinout:

VCC: Connect to Arduino 5V pin
Trig: Connect to Arduino digital pin (e.g., pin 7)
Echo: Connect to Arduino digital pin (e.g., pin 6)
GND: Connect to Arduino GND pin
Arduino Connections:

Connect the VCC pin of the HC-SR04 to the 5V pin of the Arduino.
Connect the Trig pin of the HC-SR04 to a digital pin of the Arduino (e.g., pin 7).
Connect the Echo pin of the HC-SR04 to another digital pin of the Arduino (e.g., pin 6).
Connect the GND pin of the HC-SR04 to any GND pin of the Arduino.

## Features

- Uses the HC-SR04 ultrasonic sensor to measure distance.
- Calculates distance based on the time taken for ultrasonic waves to travel to an object and back.
- Prints distance measurements to the serial monitor for real-time monitoring and debugging.

## Usage

1. Connect the HC-SR04 ultrasonic sensor to the Arduino board according to the provided pinout.
2. Upload the Arduino sketch to the board using the Arduino IDE.
3. Open the serial monitor to view real-time distance measurements.

## Dependencies

- Arduino IDE: This sketch is written in Arduino programming language and requires the Arduino IDE for compilation and uploading to the Arduino board.

## Resources

- [HC-SR04 Ultrasonic Sensor Datasheet](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf)
- [Arduino Official Website](https://www.arduino.cc/)

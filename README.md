# AI-BASED-AIR-PURIFYING-SYSTEM

An AI-based air purification system that uses a decision tree machine learning model to monitor and control indoor air quality in real-time.

About The Project
This project introduces a smart indoor air purification system that combines Artificial Intelligence (AI) and Internet of Things (IoT) technologies to improve air quality. The system gathers data from several sensors, including the MQ-135 gas sensor for detecting harmful gases and the DHT11 sensor for measuring temperature and humidity, using an ESP32 microcontroller.

Built With
Hardware:

DFRobot FireBeetle 2 ESP32-S3

Arduino Uno

MQ-135 Gas Sensor

DHT11 Temperature and Humidity Sensor

DC Fan

Relay Module

Car Cabin Air Filter

Software:

Proteus Design Suite

Arduino IDE

Google Colaboratory

Getting Started
To get a local copy up and running follow these simple example steps.

Prerequisites
Arduino IDE

Python

Required libraries for the ESP32 and sensors (can be found in the project code)

Installation
Clone the repo

Bash

git clone https://github.com/blahmz/AI-BASED-AIR-PURIFYING-SYSTEM.git
Open the Arduino code in the Arduino IDE and upload it to your ESP32 and Arduino Uno boards.

Set up the hardware as shown in the project report.

Run the Python script to train the model and get the decision tree rules.

Update the ESP32 code with the generated rules.

Usage
The system monitors indoor air quality in real-time using environmental sensors. It can detect harmful gases and changes in temperature or humidity. The system uses a machine learning model to predict pollution patterns and automatically activates a purification system only when necessary. Users can also manually control the system and access live data via a mobile/web dashboard.

Results
The system consistently classifies air quality levels correctly and triggers purification processes accordingly. The project demonstrates the practical viability of including ML models into low-power IoT devices for real-world environmental monitoring applications.

# 🏠 Smart Home Security and Intrusion Detection System using ESP32

## 📌 Project Overview

The **Smart Home Security and Intrusion Detection System** is an IoT-based security project developed using the ESP32 microcontroller. The system is designed to detect unauthorized entry and monitor door activity using sensors, providing real-time status indications through an OLED display.

The project demonstrates how embedded systems and sensor-based monitoring can be used to improve basic residential security.

## 🎯 Objectives

- Develop a low-cost smart home security monitoring system.
- Detect human movement using a PIR sensor.
- Monitor door status using a door detection input.
- Display security status and intrusion alerts on an OLED display.
- Demonstrate real-time sensor interfacing with an ESP32.

## ⚙️ Hardware Requirements

| Component | Purpose |
|---|---|
| ESP32 | Main microcontroller |
| PIR Sensor | Human movement detection |
| Door detection switch | Door status monitoring |
| OLED Display | Status and alert visualization |
| Jumper Wires | Hardware connections |

## 💻 Software Requirements

- Arduino IDE
- ESP32 Board Package
- Required OLED display library

## 🔍 Working Principle

1. The ESP32 initializes the connected sensors and OLED display.
2. The PIR sensor monitors the surrounding area for human movement.
3. The door detection input monitors the door condition.
4. The ESP32 processes the sensor inputs.
5. The OLED display provides the corresponding security status.
6. When an intrusion-related condition is detected, an alert is displayed.

## ✨ Key Features

- ESP32-based embedded security system.
- PIR-based motion detection.
- Door status monitoring.
- OLED-based real-time status display.
- Compact and low-cost implementation.
- Expandable architecture for IoT-based security applications.

## 📂 Repository Structure

```text
smart-home-security-esp32/
│
├── README.md
├── Code/
│   └── smart_intrusion.ino
│
└── Images/
    ├── block_diagram.png
    ├── flowchart.png
    ├── door_open.jpeg
    ├── intrusion_alert.jpeg
    └── system_secured.jpeg
```

## 📸 Project Demonstration

### System Block Diagram
![Block Diagram](Images/block_diagram.png)

### System Flowchart
![Flowchart](Images/flowchart.png)

### System Status and Demonstration

Add your project photographs below to demonstrate the different operating conditions.

## 🚀 Future Scope

The project can be enhanced with the following improvements:

1. **IoT Integration:** Integrate the system with the Blynk platform or a suitable IoT application to enable remote monitoring.
2. **Mobile Notifications:** Send instant intrusion alerts to the user's smartphone.
3. **Advanced Door Sensing:** Integrate a dedicated magnetic reed switch for more reliable door monitoring.
4. **Camera Integration:** Add an ESP32-CAM module for image capture during intrusion events.
5. **Cloud Connectivity:** Store security events and sensor data on a cloud platform.
6. **Intelligent Intrusion Detection:** Explore machine learning techniques to distinguish normal activity from suspicious behavior.
7. **Multi-Zone Monitoring:** Extend the system to monitor multiple doors and rooms.

## 🎓 Applications

- Residential security systems
- Smart home automation
- Small office security
- Embedded IoT monitoring applications
- Educational embedded systems projects

## 🛠️ Project Category

**Embedded Systems | Internet of Things (IoT) | ESP32 | Home Automation | Security Monitoring**



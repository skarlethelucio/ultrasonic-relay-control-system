

# Ultrasonic Relay Control System

This project uses an ultrasonic sensor to detect distance and control a relay-based lighting system.

When an object is detected within a defined threshold (≤ 10 cm), the system activates a relay to turn on a 120V light.

---

## Features
- Distance measurement using ultrasonic sensor
- Automatic light activation based on proximity
- Relay-based control of high voltage devices
- Electrical isolation between control and power circuits

---

## System Description
- **Sensor:** Ultrasonic (measures distance using time-of-flight)
- **Controller:** Arduino (decision-making logic)
- **Actuator:** Relay (controls external load)

---

## Key Concept
Distance is calculated using:
``` distance = (time × 0.0343) / 2 ```

---

##  Control Type
This system operates as an **open-loop system**, since it does not verify the actual state of the output (light).

---

## Demonstration
(Add your video link here)

Developed in 2025

# 🛤️ Automatic Railway Gate Control System

An Arduino-based smart railway crossing system designed to **automatically control gate operations** using **IR sensors**, **servo motor**, and **buzzer alerts**. This project enhances public safety by reducing manual intervention and preventing accidents.

---

## 👨‍💻 Team Members
- **P. Sai Manjunath** (24095A3305)
- **S. Venkata Sivudu** (24095A3307)

---

## 🎯 Objective

To develop an automated railway gate control system that:
- Detects an approaching train.
- Triggers visual and audio alerts.
- Automatically closes/opens the gate via servo motor.
- Operates efficiently using IR sensors and Arduino programming.

---

## 🧰 Components Used

| Component       | Functionality                                |
|----------------|-----------------------------------------------|
| **Arduino UNO** | Main controller for the entire system        |
| **IR Sensors**  | Detect train entry and exit                  |
| **Servo Motor** | Opens/closes the gate (0° = closed, 90° = open) |
| **LEDs**        | Red & Green indicators for road traffic      |
| **Buzzer**      | Audio alert for vehicles and pedestrians     |
| **Jumper Wires**| Circuit connections                          |
| **220Ω Resistors** | Current-limiting for LEDs                 |

---

## 🛠️ Tools Used
- **Arduino IDE** – Programming the microcontroller.
- **Proteus Simulation** – Virtual testing and validation of the circuit.

---

## ⚙️ Working Methodology

1. **Train Detection (Entry)** – IR Sensor 1 detects the approaching train.
2. **Alert & Gate Close** – Buzzer sounds, red LED turns on, green LED off, and servo closes the gate.
3. **Train Detection (Exit)** – IR Sensor 2 detects the train's departure.
4. **Gate Reopen** – Gate opens, green LED turns on, buzzer sounds, red LED turns off.

---

## 🔋 Parameters Considered

- **Train Presence:** Detected using two IR sensors.
- **Gate Angle:** Closed at 0°, open at 90°.
- **LED Status:** Red (STOP), Green (GO).
- **Buzzer Alerts:** Active during gate transitions.

---

## 🖼️ Circuit Diagram

_(Add your circuit image here in the repo)_
```
./images/railway_circuit.png
```

---

## 🧪 Code Implementation (Arduino)

📁 **[Download Arduino Code](./gate_control.ino)**

---

## 📊 Results & Observations

- Successful **train detection** using IR sensors.
- Correct **servo movement** to open/close the gate.
- Clear **visual and audio feedback** using LEDs and buzzer.
- Simulation in Proteus confirmed functional reliability.

---

## 🚀 Future Enhancements
- Add **GSM module** for remote alerts to control rooms.
- Introduce **RFID or GPS modules** for advanced detection.
- Use **multiple sensor fusion** (Hall Effect, Sound Detection, Doppler Radar) for improved accuracy.
- Implement a **web-based dashboard** for real-time monitoring.

---

## 🙌 Acknowledgements

Thanks to our mentors, faculty, and teammates who guided us throughout the development and testing of this project.

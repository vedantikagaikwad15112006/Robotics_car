# 🤖 Obstacle Avoiding Autonomous Robotic Car

## 📌 Project Overview

The **Obstacle Avoiding Autonomous Robotic Car** is an Arduino UNO-based robotics project designed to detect obstacles and automatically change its direction to avoid collisions.

The system uses an **HC-SR04 ultrasonic sensor** to measure the distance between the robotic car and nearby obstacles. The **Arduino UNO** processes the distance information and controls the DC motors through an **L298N motor driver**.

When an obstacle is detected within a predefined distance, the robot automatically changes its direction and continues moving without requiring continuous manual control.

---

## 🎯 Objectives

* Detect obstacles using an ultrasonic sensor.
* Measure the distance of obstacles in real time.
* Process sensor data using Arduino UNO.
* Control DC motors using an L298N motor driver.
* Automatically change direction when an obstacle is detected.
* Demonstrate autonomous navigation using embedded systems.

---

## ⚙️ Working Principle

The **HC-SR04 ultrasonic sensor** sends an ultrasonic pulse and measures the time taken for the reflected echo to return.

The Arduino UNO uses this information to calculate the distance between the robot and the obstacle.

```text
       HC-SR04
   Ultrasonic Sensor
           │
           ▼
    Distance Measurement
           │
           ▼
       Arduino UNO
           │
           ▼
    Obstacle Detection
           │
           ▼
     Decision Making
           │
           ▼
      L298N Driver
           │
           ▼
       DC Motors
           │
           ▼
   Autonomous Movement
```

---

## 🚗 Navigation Logic

```text
START
  │
  ▼
Move Forward
  │
  ▼
Measure Distance
  │
  ▼
Obstacle Detected?
 ┌────────┴────────┐
 │                 │
NO                YES
 │                 │
 ▼                 ▼
Continue        Stop Robot
Forward             │
                    ▼
              Change Direction
                    │
                    ▼
              Resume Movement
                    │
                    ▼
              Continue Forward
```

---

## 🧩 Hardware Components

| Component                     | Purpose                                     |
| ----------------------------- | ------------------------------------------- |
| **Arduino UNO**               | Main controller                             |
| **HC-SR04 Ultrasonic Sensor** | Obstacle detection and distance measurement |
| **L298N Motor Driver**        | Controls the DC motors                      |
| **DC Motors**                 | Provides robotic movement                   |
| **Robot Chassis**             | Mechanical structure                        |
| **Wheels**                    | Vehicle movement                            |
| **Battery**                   | Power supply                                |
| **Jumper Wires**              | Electrical connections                      |

---

## 🔌 System Architecture

```text
             OBSTACLE
                 ▲
                 │
                 │ Ultrasonic Waves
                 │
          ┌──────────────┐
          │   HC-SR04    │
          │    Sensor    │
          └──────┬───────┘
                 │
          Distance Data
                 │
                 ▼
        ┌────────────────┐
        │   Arduino UNO  │
        │                │
        │ Decision Logic │
        └───────┬────────┘
                │
          Control Signals
                │
                ▼
        ┌────────────────┐
        │  L298N Driver  │
        └───────┬────────┘
                │
          Motor Control
                │
          ┌─────┴─────┐
          ▼           ▼
      DC Motor     DC Motor
```

---

## 💻 Firmware

The robotic car is programmed using **Arduino C/C++** in the **Arduino IDE**.

The firmware implements:

* HC-SR04 ultrasonic distance measurement
* Obstacle detection
* Distance threshold comparison
* DC motor control
* Forward movement
* Direction control
* Automatic obstacle avoidance

### Source Code

👉 [View Arduino Source Code](firmware/obstacle_avoiding_car.ino)

---

## 🔧 Key Features

* 🤖 Autonomous obstacle avoidance
* 📡 Ultrasonic obstacle detection
* 📏 Real-time distance measurement
* 🧠 Sensor-based decision making
* ⚙️ Arduino-based motor control
* 🔄 Automatic direction change
* 🚗 Autonomous movement
* 🔋 Battery-powered operation

---

## 🛠️ Technologies Used

| Category                | Technology                  |
| ----------------------- | --------------------------- |
| Microcontroller         | Arduino UNO                 |
| Programming             | Arduino C/C++               |
| Sensor                  | HC-SR04 Ultrasonic Sensor   |
| Motor Driver            | L298N                       |
| Actuators               | DC Motors                   |
| Development Environment | Arduino IDE                 |
| Domain                  | Embedded Systems & Robotics |

---

## 📁 Repository Structure

```text
Obstacle-Avoiding-Autonomous-Robotic-Car/
│
├── firmware/
│   └── obstacle_avoiding_car.ino
│
├── circuit/
│   └── circuit_diagram.png
│
├── README.md
│
└── .gitignore
```

---

## 📚 Learning Outcomes

This project provided hands-on experience in:

* Arduino UNO programming
* Embedded C/C++
* Ultrasonic sensor interfacing
* Distance measurement
* Motor driver interfacing
* DC motor control
* Digital I/O
* PWM-based motor control
* Sensor-based decision making
* Autonomous robotics
* Embedded system integration

---

## 🚀 Future Improvements

* Add multiple ultrasonic sensors for wider obstacle detection.
* Add a servo motor for sensor scanning.
* Implement encoder-based speed and position control.
* Improve obstacle avoidance and path planning.
* Add Bluetooth or Wi-Fi connectivity.
* Implement real-time monitoring through a mobile application.

---

## 👨‍💻 Project Information

**Project Name:** Obstacle Avoiding Autonomous Robotic Car
**Domain:** Embedded Systems & Robotics
**Controller:** Arduino UNO
**Sensor:** HC-SR04 Ultrasonic Sensor
**Motor Driver:** L298N
**Programming:** Arduino C/C++
**Development Tool:** Arduino IDE
**Application:** Autonomous Obstacle Avoidance

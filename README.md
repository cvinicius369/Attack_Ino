# 🥷 Attack Ino

Code project for Arduino, educational project, the intention of the code is that it operates at the frequencies used by drones, as soon as it reaches a frequency of a drone, that is, as soon as it comes into contact with the drone, it starts to have control of it. The project is ugly in Arduino (.ino) which is similar to C++. 

<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=blue&color=black"/> <img loading="lazy" src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white"> <img loading="lazy" src="https://img.shields.io/badge/Arduino_IDE-00979D?style=for-the-badge&logo=arduino&logoColor=white">

## 🚧Architecture

1. **Frequency Control Module**: This module will be responsible for managing the drone's operating frequencies. It must be able to adjust frequencies as needed to ensure effective communication with the drone.

2. **Flight Control Module**: This module will be responsible for issuing flight commands to the drone. This will include commands like take off, land, move left/right, etc.

3. **Telemetry Module**: This module will be responsible for receiving and processing the drone's telemetry data. This may include information such as current altitude,
speed, direction, etc.

4. **User Interface Module**: This module will be responsible for interacting with the user. It must provide a user-friendly interface that allows the user to issue flight commands and view telemetry data.

5. **Security Module**: This module will be responsible for ensuring the safety of the drone.
It must be able to detect dangerous situations (such as low battery or loss of signal) and take appropriate action (such as returning to the takeoff point).

## ⚠️LICENSE AND OBSERVATION
  - Under license: CC0 1.0 Universal
  - Warning: This project is for educational purposes and should not be used to carry out illegal practices, I would like to inform you that I am NOT RESPONSIBLE for the misuse of the project by third parties.

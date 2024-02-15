# IR_Sensor
![Purple Sky Profile Header](https://github.com/SamiIonesi/IR_Sensor/assets/150432462/bb2485ef-e777-415e-9472-ed8b1103af09)
IR Sensor is an electronic device that can, for example, measure the heat of an object or detect its movement.
This sensor can be implemented for applications such as:
- parking sensor
- bathroom light switch-on sensor
- faucet sensor
- sensor for determining the temperature of a body

**The project I carried out had in mind the implementation and imitation of a parking sensor or a sensor for determining the proximity of a body.**

## How does it work?
Click on [Video](https://www.youtube.com/shorts/FhNuJRRbq8E) to see how the project work.

For this project you'll need:
1. Arduino Uno Board
2. IR Reciver
3. IR Emittors x 4
4. Buzzer
5. LEDs (Green, Yellow, Red)
6. 100 kohmi resistance, 330 ohms resistance x 3

<p align="center">
  <img src="https://github.com/SamiIonesi/IR_Sensor/assets/150432462/11e5ee90-47ce-47b8-95f4-d75fd9073a95" width="600" height="450">
</p>
<p align="center">
  Circuit Scheme
</p>

This circuit also includes 3 LEDs that are connected to the ground through 330 ohm resistors and the anode of these LEDs are connected as follows:
- *Red LED* to pin D3
- *Yellow* LED to pin D4
- *Green* LED to pin D5


## Instructions
This repository contains the following:
- an **Arduino** script that contains the code necessary for the sensor to work
- a **Matlab** script that will display the data taken from the sensor/from the serial on a graph
- a **documentation** file and also a short **powerpoint** that show the functionality of the sensor

## Installing
1. For the Arduino script you'll need to download the:
  - [Arduino IDE](https://www.arduino.cc/en/software)
2. For the Matlab script you'll need to install:
  - [Matlab](https://www.mathworks.com/products/matlab.html)
  - or you can acces [Matlab Online](https://www.mathworks.com/products/matlab-online.html)

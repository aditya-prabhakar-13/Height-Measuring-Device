# Ultrasonic Height Measurement System 

This project is an **Ultrasonic Height Measurement System** built using **Arduino, an HC-SR04 ultrasonic sensor, and a 16x2 LCD display**. It calculates a person's height by measuring the distance from the sensor (mounted at a fixed height) to the individual's head and displays the result on an LCD screen.  

---

## 📌 Features  
 **Real-time Height Measurement** – Displays height instantly on an LCD screen.  
 **Ultrasonic Sensor (HC-SR04)** – Uses sound waves for precise distance measurement.  
 **Arduino-Powered** – Simple, efficient, and perfect for DIY projects.  
 **LCD Display (16x2)** – Shows the measured height in centimeters.  
 **Compact & Affordable** – Uses minimal components for a cost-effective solution.  

---

##  Components Required  
- **Arduino Uno/Nano**  
- **HC-SR04 Ultrasonic Sensor**  
- **16x2 LCD Display** (with I2C adapter or direct connection)  
- **Potentiometer (if not using I2C)**  
- **Jumper Wires**  
- **Power Supply (5V)**  

---

##  Circuit Diagram  
(Insert circuit diagram here)  

Connections for **HC-SR04 Ultrasonic Sensor**:  
| HC-SR04 Pin | Arduino Pin |  
|-------------|------------|  
| VCC         | 5V         |  
| Trig        | 9          |  
| Echo        | 10         |  
| GND         | GND        |  

Connections for **LCD (16x2)**:  
| LCD Pin | Arduino Pin |  
|---------|------------|  
| VSS     | GND        |  
| VCC     | 5V         |  
| RS      | 12         |  
| E       | 11         |  
| D4      | 5         |  
| D5      | 4         |  
| D6      | 3         |  
| D7      | 2         |  

---

##  Code Explanation  
1️⃣ The **HC-SR04 sensor** sends an ultrasonic pulse and measures the time for the echo to return.  
2️⃣ The **distance to the head** is calculated using the formula:  
   ```cpp
   Distance = (Pulse Duration × 0.034) / 2
```
3️⃣ The height is determined by subtracting this distance from the sensor’s mounting height (e.g., 180 cm).
4️⃣ The height is displayed on the 16x2 LCD screen.

## How to Run
- Install Arduino IDE (if not already installed).
- Connect the components as per the circuit diagram.
- Upload the code to the Arduino board.
- Power the circuit and view the height measurement on the LCD screen.

# Buzzer Duet with Arduino

**Repository Name:** `Buzzer-Duet-with-Arduino-`  
**Description:** A melody played with the help of two buzzers, breadboard and Arduino Uno.

---

## Project Overview

This project demonstrates how to play a simple melody using **two buzzers** connected to an **Arduino Uno**.  
The melody alternates between the two buzzers, creating a "duet" effect.

It is a beginner-friendly Arduino project that introduces:

- Using the `tone()` function  
- Working with arrays  
- Basic timing using `delay()`  
- Alternating outputs between components  

---

## Components Required

- Arduino Uno  
- 2x Piezo Buzzers  
- Breadboard  
- Jumper Wires  
- USB Cable  

---

## Circuit Connections

### Buzzer 1
- Positive (+) → Digital Pin **8**
- Negative (–) → **GND**

### Buzzer 2
- Positive (+) → Digital Pin **9**
- Negative (–) → **GND**

Both buzzers share the Arduino ground.

---

## Circuit Diagram


![Circuit Diagram](https://github.com/ChirayuShende/Buzzer-Duet-with-Arduino-/blob/main/images/buzzer%20duet%20connections.png?raw=true)


## 🎼 How It Works

- The `melody` array stores note frequencies (in Hz).
- A `for` loop cycles through each note.
- Even-indexed notes play on **Buzzer 1**.
- Odd-indexed notes play on **Buzzer 2**.
- A delay ensures smooth playback.
- After finishing the melody, the system waits 1 second and repeats.

---

## 🚀 How to Run the Project

1. Connect the circuit as shown above.
2. Open the Arduino IDE.
3. Select:
   - Board: **Arduino Uno**
   - Port: Your connected COM port
4. Upload the code.
5. Enjoy the buzzer duet 


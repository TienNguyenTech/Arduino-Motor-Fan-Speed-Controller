# 🌀 Arduino Motor Fan Speed Controller

This project controls the speed of a DC fan using a potentiometer and an Arduino board. The fan speed adjusts based on the potentiometer's position.

## 🛠 Requirements
- Arduino board (Uno, Mega, etc.)
- DC Fan (PWM-controlled)
- Potentiometer
- NPN Transistor (e.g., 2N2222) or MOSFET
- Diode (e.g., 1N4007) for flyback protection
- Resistor (1kΩ for transistor base)
- Breadboard and jumper wires

## ⚡ Wiring Diagram
| Component       | Arduino Pin |
|---------------|------------|
| Potentiometer | A0         |
| Fan           | 9 (PWM)    |
| Transistor Base | Resistor → PWM Pin |
| Transistor Collector | Fan - | 
| Transistor Emitter | GND |
| Flyback Diode | Across Fan |

## 🚀 How to Use
1. Connect the circuit following the wiring diagram.
2. Upload the Arduino code to your board.
3. Turn the potentiometer to adjust the fan speed.

## 📌 Notes
- Ensure the fan voltage matches the power supply.
- If the fan draws high current, use a MOSFET instead of a transistor.
- A capacitor across the power lines can reduce noise.

Stay cool with your custom Arduino fan controller! ❄️

# LED Decorative Patterns Using Arduino UNO

A fun DIY lighting project using an **Arduino UNO** to run decorative **LED blink/sequence patterns** across **7 output pins (D1–D7)**.

The main sketch is included in: **`sketch_may16c.ino`**.

---

## ⚡ What this project does

This Arduino sketch controls **7 digital outputs** and plays multiple animation patterns such as:

- All LEDs blinking together
- Left-to-right / right-to-left running lights
- Speed-up / slow-down blinking
- Single-channel “color” blink patterns (one pin at a time)
- Inward/outward style animations

---

## 🔧 Hardware Requirements

### For LOW voltage LEDs (recommended)
- Arduino UNO (or compatible)
- 7 LEDs
- 7 × 220Ω resistors (one per LED)
- Breadboard + jumper wires

### If you are controlling 230V LED lights (mains)
> **Important:** Arduino pins must **NOT** be connected directly to 230V.
Use proper isolation:
- Relay module -- SSR (Solid State Relay) **rated for 230V**
- Transistor circuit 
- Proper insulation, enclosure. Remember Safty first :)

---

## 🔌 Wiring (Low-voltage LED setup)

Connect each LED like this:

- **D1 → resistor → LED anode (+)**
- **LED cathode (–) → GND**

Repeat for **D1 to D7**.

✅ Pins used in this sketch: **1, 2, 3, 4, 5, 6, 7**

> Note: Digital pins **0 and 1** are normally used for Serial communication on Arduino UNO.
This sketch uses **D1**, which can sometimes affect uploading.
If you face upload issues, consider moving outputs to other pins (ex: D2–D8) and update `first` and `last`.

---

## 🧠 How the code works (it's simple)

### Key settings
- `first = 1` and `last = 7` → the output pin range
- `on = LOW` and `off = HIGH` → outputs are **active-low**
  - Meaning: writing `LOW` turns the LED ON (common when using certain driver circuits)

### Main patterns (functions)
- `P1()` / `P1(count)` → left-to-right running pattern (speed changes in `P1()`)
- `P2()` / `P2(count)` → right-to-left running pattern (speed changes)
- `All_blink1(time, count)` → all pins blink together
- `All_blink1(time, count, inc)` → blinking speeds up (time decreases)
- `All_blink2(time, count, dec)` → blinking slows down (time increases)
- `color(pin, time, count)` → blinks one selected pin
- `P1in(count)` / `P2in(count)` → “inward” style switching with OFF → ON effect
- `allOn()` / `allOff()` → turns all pins on/off sequentially
- `allOn2()` / `allOff2()` → same but in reverse order

---

## ▶️ How to run (Arduino IDE)

1. Install **Arduino IDE**
2. Open **`sketch_may16c.ino`**
3. Connect Arduino UNO via USB
4. Select:
   - **Tools → Board → Arduino Uno**
   - **Tools → Port → (your Arduino port)**
5. Click **Upload**
6. The patterns start automatically and repeat forever inside `loop()`.

---

## 🛠 Customization

### Change speed
You can modify delays by changing values like:
- `time = 80;`
- `All_blink1(200, 8);`
- `color(i, 150, 3);`

Smaller delay = faster animation.

### Change number of LEDs/pins
Update:
```cpp
#define first 1
#define last 7

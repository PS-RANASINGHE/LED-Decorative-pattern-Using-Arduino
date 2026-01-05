# LED Decorative Patterns Using Arduino UNO (D1–D7)

This repository contains an Arduino UNO project that runs multiple **decorative LED lighting patterns** using **7 digital output pins (D1 to D7)**.

The patterns are written in **C++ (Arduino)** and are included in:

- `sketch_may16c.ino`

---

## ✅ What this project does

The sketch controls **pins 1 to 7** and plays a sequence of lighting patterns in a loop, including:

- All LEDs turning on/off in order
- Left-to-right and right-to-left running patterns
- Blink-all patterns with constant, increasing, and decreasing delays
- Reverse-direction patterns
- Single-pin “color” blinking
- Inward-style switching (OFF → ON)

---

## ⚙️ Important: Active-LOW Logic

This code defines:

```cpp
#define on LOW
#define off HIGH
```

Reference - https://www.youtube.com/watch?v=C3kBLRdkrkU

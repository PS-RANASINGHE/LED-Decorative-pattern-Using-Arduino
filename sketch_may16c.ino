#define on LOW
#define off HIGH
#define first 1
#define last 7
#define loops 10
int time = 20;
void setup() {
  for (int i = first ; i <= last; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    time = 80;
    allOn();
    allOff();
  }
  for (int i = 1; i < 4; i++) {
    P1(1);
    P2(0);
    P1(1);
    P2(2);
    P1(0);
  }
  P1();
  P2();
  All_blink1(200, 8);
  for (int i = 1; i < 10; i++) {
    time = 80;
    allOn2();
    allOff2();
  }
  P1in(3);
  P2in(3);
  P1in(3);
  P2in(3);
  for (int i = 1; i < 10; i++) {
    time = 80;
    allOn2();
    allOff();
  }
  for (int i = 1; i < 8; i++) {
    color(i, 150, 3);
  }
  P11(5);
  for (int i = 0; i < 20; i++) {
    P1(0);
    P2(0);
  }
  All_blink1(500, 22, 20);
  All_blink2(80, 21, 20);
  color(4, 150, 3);
  color(6, 150, 3);
  color(5, 150, 3);
  color(7, 150, 3);
}
////////////// Patterns /////////////////////
void P1(int count) {
  time = 80;
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
    }
  }
}
void P1() {
  time = 50;
  for (int j = 0; j <= 25; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
      time += 1;
    }
  }
}
void P11(int count) {
  time = 200;
  for (int j = 0; j <= count - 1; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
      digitalWrite(i + 1, on);
      delay(time * 2);
      digitalWrite(i, off);
      digitalWrite(i + 1, off);
      // time += 1;
    }
  }
}
void P2() {
  time = 210;
  for (int j = 0; j <= 20; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
      time -= 1;
    }
  }
}
void P2(int count) {
  time = 80;
  for (int j = 0; j <= count; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, on);
      delay(time);
      digitalWrite(i, off);
      time--;
    }
  }
}
void All_blink1(int time, int count) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
    }
    delay(time);
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
    }
    delay(time);
  }
}
void All_blink1(int time, int count, int inc) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
    }
    delay(time);
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
    }
    delay(time);
    time -= inc;
  }
}
void All_blink2(int time, int count, int dec) {
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, on);
    }
    delay(time);
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
    }
    delay(time);
    time += dec;
  }
}
void color(int pin, int time, int count) {
  for (int j = 0; j <= count; j++) {
    digitalWrite(pin, on);
    delay(time);
    digitalWrite(pin, off);
    delay(time);
  }
}
void P1in(int count) {
  time = 200;
  for (int j = 0; j <= count; j++) {
    for (int i = first; i <= last; i++) {
      digitalWrite(i, off);
      delay(time);
      digitalWrite(i, on);
    }
  }
}
void P2in(int count) {
  time = 200;
  for (int j = 0; j <= count; j++) {
    for (int i = last; i >= first; i--) {
      digitalWrite(i, off);
      delay(time);
      digitalWrite(i, on);
    }
  }
}
void allOn() {
  for (int i = first; i <= last; i++) {
    digitalWrite(i, on);
    delay(time);
  }
}
void allOff() {
  for (int i = first; i <= last; i++) {
    digitalWrite(i, off);
    delay(time);
  }
}
void allOn2() {
  for (int i = first; i <= last; i++) {
    digitalWrite(8 - i, on);
    delay(time);
  }
}
void allOff2() {
  for (int i = first; i <= last; i++) {
    digitalWrite(8 - i, off);
    delay(time);
  }
}

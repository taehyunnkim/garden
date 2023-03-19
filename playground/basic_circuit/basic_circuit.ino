void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  // yellow();
  // red();
  // white();
  off();
}

void off() {
  digitalWrite(8, LOW);
}

void yellow() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
  }
}

void red() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
  }
}

void white() {
  for (int i = 0; i < 15; i++) {
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(1000);
  }
}

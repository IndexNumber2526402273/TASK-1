int startValue = 5;

void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while (count >= 1) {
    Serial.print("Count: ");
    Serial.println(count);
    flashLED(count);
    delay(1000);
    count--;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Empty - everything happens once in setup()
}
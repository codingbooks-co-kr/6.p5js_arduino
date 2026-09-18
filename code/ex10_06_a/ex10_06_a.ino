// 아두이노: 정숫값 받아 부저 주파수 제어

#define BUZZER 13

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    int value = Serial.parseInt();
    tone(BUZZER, value, 500);
  }
}

// 아두이노: 폴링(polling) 방식
// 수신된 정수로 LED 점멸 제어

#define LED 6

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // 수신 여부 검사
  while (Serial.available()) {
    int value = Serial.read();
    if (value == 1) {
      digitalWrite(LED, 1);
    } else if (value == 0) {
      digitalWrite(LED, 0);
    }
  }
}

// 아두이노: 인터럽트(interrupt) 방식
// 수신된 정수로 LED 점멸 제어

#define LED 6

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
}

// 수신값이 있으면 자동 호출
void serialEvent() {
  int value = Serial.read();
  if (value == 1) {
    digitalWrite(LED, 1);
  } else if (value == 0) {
    digitalWrite(LED, 0);
  }
}

// 아두이노: 인터럽트 방식
// 마우스 클릭값 수신, 버튼 클릭값 송신

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
}

// 수신값이 있으면 자동 호출
void serialEvent() {
  int value1 = Serial.read();
  digitalWrite(LED, value1);
  int value2 = digitalRead(BUTTON);
  Serial.write(value2);
}

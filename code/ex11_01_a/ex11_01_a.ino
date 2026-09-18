// 아두이노: 버튼값 송신

#define BUTTON 2

void setup() {
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    Serial.write(0);
  } else {
    Serial.write(1);
  }
  delay(30);
}

// 아두이노: 가변저항값 수신

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    int value = Serial.read();
    analogWrite(LED, value);
  }
}

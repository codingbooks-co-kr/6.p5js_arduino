// 아두이노: 2개의 값 받아 서보모터 각도 및 LED 밝기 제어

#include <Servo.h>
#define LED 6
#define SERVO A0
Servo servo;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);
  Serial.begin(9600);
}

void loop() {
  while (Serial.findUntil("A", "\n")) {
    int value1 = Serial.parseInt();
    int value2 = Serial.parseInt();
    servo.write(value1);
    analogWrite(LED, value2);
  }
}

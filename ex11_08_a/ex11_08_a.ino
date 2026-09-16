// 아두이노: 가변저항값 2개 송신 2

#define VARIABLE_R1 A1
#define VARIABLE_R2 A2

void setup() {
  pinMode(VARIABLE_R1, INPUT);
  pinMode(VARIABLE_R2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value1 = analogRead(VARIABLE_R1);
  int value2 = analogRead(VARIABLE_R2);
  Serial.write(0xff);
  int high_byte = (value1 & 0xff00) >> 8;
  int low_byte = value1 & 0x00ff;
  Serial.write(high_byte);
  Serial.write(low_byte);

  high_byte = (value2 & 0xff00) >> 8;
  low_byte = value2 & 0x00ff;
  Serial.write(high_byte);
  Serial.write(low_byte);
  delay(30);
}

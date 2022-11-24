#include <Arduino.h>

void setup() {
  Serial2.begin(9600);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  Serial.print(Serial2.read());
  Serial.print(Serial2.read());
  Serial.println(Serial2.read());
  delay(1000);
  // put your main code here, to run repeatedly:
}
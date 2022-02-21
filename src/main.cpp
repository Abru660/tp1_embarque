#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("J'ALLUME !!!");
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
   Serial.println("J'ETEINS !!!");
  delay(1000);
}
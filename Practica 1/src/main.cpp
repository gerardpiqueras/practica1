#include <Arduino.h>
int led = 13;

void setup() {                  
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("ON");
  delay(2000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("OFF");
  delay(2000);               // wait for a second
}

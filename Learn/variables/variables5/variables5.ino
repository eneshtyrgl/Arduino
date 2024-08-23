/*
  Variables 5

  This program demonstrates the use of constant variables in Arduino.
  It sets up a pin for an LED and a pin for a button, using constants 
  to ensure these values do not change during the program's execution.

  created 23 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
const int LEDpin = 9;
const int butonPin = 8;
void setup() {
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(butonPin, INPUT);
}
void loop() {
  LEDpin = 12;   // this line will cause a compiler error because LEDpin is declared as a `const`
  delay(100);
}

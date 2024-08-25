/*
  Mathematical Operations 8

  This sketch demonstrates basic bitwise operations on a byte variable in Arduino.
  It shows how to represent a byte in different number systems (decimal and binary),
  and how to manipulate individual bits using `bitSet` and `bitClear` functions.

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
byte byteVariable = 97;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  Serial.println("1 byte variable:");

  Serial.print("In base 10: ");
  Serial.println(byteVariable, DEC);

  Serial.print("In base 2: ");
  Serial.println(byteVariable, BIN);

  bitSet(byteVariable, 4);
  Serial.print("5th bit set to 1: ");
  Serial.println(byteVariable, BIN);

  bitClear(byteVariable, 0);
  Serial.print("1st bit is reset: ");
  Serial.println(byteVariable, BIN);


  // lock the program here (infinite loop) 
  while(1); 
}

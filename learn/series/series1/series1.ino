/*
  Series 1

  This program demonstrates how to use arrays in Arduino to store and
  access a series of integer and floating-point numbers. It prints the
  values from two arrays to the Serial Monitor using for loop.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int integerNumbers[10] = { 1, 3, 4, 7, 9, 10, 45, 67, 56, 444 };
float decimalNumbers[5] = { 10.3, 34.3, 34.23, 45.67 };  // 0.00 at index 4

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {

  for (int i = 0; i < 10; i++) {
    Serial.println(integerNumbers[i]);
  }
  for (int i = 0; i < 5; i++) {
    Serial.println(decimalNumbers[i]);
  }

  // lock the program here (infinite loop)
  while (1)
    ;
}

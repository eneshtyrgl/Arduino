/*
  Control Structures 2

  This sketch demonstrates the use of a `while` loop in Arduino.
  It counts from 1 to 100, printing each number to the Serial Monitor 
  with a delay of 100 milliseconds between each number. After reaching 
  100, it prints a message indicating exit from the loop.

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/


void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  int a = 0;
  while (a < 100) {
      a = a + 1;
      Serial.println(a);
      delay(100);
  }
  Serial.println("Exit from loop!");


  // lock the program here (infinite loop) 
  while(1); 
}

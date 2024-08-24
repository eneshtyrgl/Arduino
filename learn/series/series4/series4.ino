/*
  Series 4

  This program demonstrates the use of global, local, and static variables in Arduino.
  It shows how these variables behave differently in terms of scope and persistence across function calls.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// global variables definition scope
int globalA;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  function1();
  delay(5000);
}

void function1() {
  // local variables definition scope
  int localB;
  static int counter = 0;
  Serial.print("counter variable's value at the beginning:");
  Serial.println(counter);
  Serial.print("globalA variable's value at the beginning:");
  Serial.println(globalA);
  Serial.print("localB variable's value at the beginning:");
  Serial.println(localB);
  localB = 5;
  Serial.print("localB variable's value after assigning:");
  Serial.println(localB);
  counter = counter + 1;
  globalA = globalA + 1;
}
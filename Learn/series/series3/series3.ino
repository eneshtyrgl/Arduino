/*
  Series 3

  This program demonstrates the concept of variable scope in Arduino programming.
  It shows how variables can be defined globally and locally within functions.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// global variables definition scope
int a;
float b;
char c;

void setup() {
  // setup() function local variables definition scope
  byte d;
  int e;
  float f;

  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  // loop() function local variables definition scope
  int g;
  byte h;
}

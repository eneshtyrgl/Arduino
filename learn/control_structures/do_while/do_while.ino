/*
  Control Structures 3

  This sketch demonstrates the use of a `do...while` loop in Arduino.
  It starts with an initial value of `a` set to 80 and increments it 
  by 1 until `a` reaches 100. The current value of `a` is printed to 
  the Serial Monitor with a delay of 100 milliseconds between each 
  printed value. After exiting the loop, it prints a message indicating 
  that it has exited the loop.

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int a = 80;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  do {
    a = a + 1;
    Serial.println(a);
    delay(100);
  } 
  while (a < 100);

  Serial.println("Exit from loop!");


  // lock the program here (infinite loop) 
  while(1); 
}

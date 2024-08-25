/*
  Control Structures 5

  This sketch demonstrates the use of a `while` loop combined with 
  an `if` statement in Arduino. It starts with a counter `a` initialized 
  to 0 and increments it by 1 until it reaches 10 or 100. If `a` equals 10, 
  the loop is exited using the `break` statement. The current value of `a` 
  is printed to the Serial Monitor with a delay of 100 milliseconds between 
  each print. After exiting the loop, it prints a message indicating that 
  it has exited the loop.

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int a = 0;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  while (a < 100) {
    if(a == 10) { break; }
    a = a + 1;
    Serial.println(a);
    delay(100);
  }
  Serial.println("Exit from loop!");


  // lock the program here (infinite loop) 
  while(1); 
}

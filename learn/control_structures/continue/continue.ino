/*
  Control Structures 6

  This sketch uses a while loop with an if statement and the continue statement to increment a
  counter a from 0 to 100.  It skips printing even numbers, displaying only odd numbers to the 
  Serial Monitor with a 100-millisecond delay. After the loop, it prints a completion message.

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
    a = a + 1;
    if(a % 2 == 0) { continue; }

    // for even numbers, the rest of the loop is not executed, it goes back to the begginning
    Serial.println(a);
    delay(100);
  }
  Serial.println("Exit from loop!");


  // lock the program here (infinite loop) 
  while(1); 
}

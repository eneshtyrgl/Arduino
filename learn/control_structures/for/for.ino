/*
  Control Structures 4

  This sketch demonstrates the use of a `for` loop in Arduino.
  It initializes a counter `a` to 0 and increments it up to 9,
  printing each value to the Serial Monitor with a delay of 500 milliseconds
  between each print. After the loop completes, the program enters
  an infinite loop to stop further execution.

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int a;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
for(a = 0; a < 10; a++) {
    Serial.print("Counter: ");
    Serial.println(a);
    delay(500);
}


  // lock the program here (infinite loop) 
  while(1); 
}

/*
  Mathematical Operations 5

  This program demonstrates the use of the max, min, and constrain functions.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int number;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  for (number = -1000; number <= 2000; number +=100) {
    Serial.print("Number:");
    Serial.print(number);
    Serial.print(" Max:");
    Serial.print(max(number,100));
    Serial.print(" Min:");
    Serial.print(min(number,100));
    Serial.print(" Constrain:");
    Serial.println(constrain(number,100,200));
  }


  // lock the program here (infinite loop) 
  while(1); 
}

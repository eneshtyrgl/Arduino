/*
  Mathematical Operations 6

  Rounding decimal numbers to integers with the 'floor()' and 'ceil()' functions

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
float f= -1.0;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  for(int i=0; i<20; i++) {
   Serial.print("Number:");
   Serial.print(f);   
   Serial.print(" Floor:");
   Serial.print(floor(f));
   Serial.print(" Ceil:");
   Serial.println(ceil(f));
   f = f + 0.2;
   
  }


  // lock the program here (infinite loop) 
  while(1); 
}

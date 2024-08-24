/*
  Mathematical Operations 4

  This program calculates and prints the root of numbers between 1 and 50.
  It uses the `sqrt()` function to perform these mathematical operations.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int i;
float rootValue;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  // printing root of numbers between 1 - 50
  for(i=1;i<51;i++){
    rootValue = sqrt(i);
    Serial.print("number:");  
    Serial.print(i);
    Serial.print(" root:");
    Serial.println(rootValue);
  }


  // lock the program here (infinite loop) 
  while(1); 
}

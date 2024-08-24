/*
  Mathematical Operations 3

  This program calculates and prints the square and root of numbers between 1 and 10.
  It uses the `pow()` function to perform these mathematical operations.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int i;
int squareValue;
float rootValue;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  // printing square of numbers between 1 - 10  
  for(i=1;i<11;i++){
    squareValue = pow(i,2);
    Serial.print("number:");  
    Serial.print(i);
    Serial.print(" squareValue:");
    Serial.println(squareValue);
  }
  // printing root of numbers between 1 - 10  
  for(i=1;i<11;i++){
    rootValue = pow(i, 0.5);
    Serial.print("number:");  
    Serial.print(i);
    Serial.print(" root:");
    Serial.println(rootValue);
  }


  // lock the program here (infinite loop) 
  while(1);  
}

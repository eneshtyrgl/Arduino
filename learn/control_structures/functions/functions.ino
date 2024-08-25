/*
  Control Structures 7

  This sketch performs basic arithmetic operations (multiplication, addition, 
  subtraction, and average) using separate functions for integers `a`, `b`, and `c`. 
  It prints the results to the Serial Monitor and then runs indefinitely.

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int a = 2;
int b = 3;
int c = 4;
int intResult;
float floatResult;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  intResult = multiplyFunction(a, b); 
  Serial.print("Multiplication Result: ");
  Serial.println(intResult);

  intResult = addFunction(a, b); 
  Serial.print("Addition Result: ");
  Serial.println(intResult);

  intResult = subtractFunction(a, b); 
  Serial.print("Subtraction Result: ");
  Serial.println(intResult); 

  floatResult = averageFunction(a, b, c);
  Serial.print("Average Result: ");
  Serial.println(floatResult);



  // lock the program here (infinite loop) 
  while(1); 
}

int multiplyFunction(int x, int y) {
  int result;
  result = x * y;
  return result;
}

int addFunction(int x, int y) {
  int result;
  result = x + y;
  return result;
}

int subtractFunction(int x, int y) {
  int result;
  result = x - y;
  return result;
}

float averageFunction(int x, int y, int z) {
  float result;
  result = (x + y + z) / 3.0;
  return result;
}

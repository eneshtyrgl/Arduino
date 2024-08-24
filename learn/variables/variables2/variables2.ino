/*
  Variables 2

  This sketch demonstrates the difference between integer division 
  and floating-point division in Arduino. It shows how dividing the 
  same numbers can yield different results depending on the variable 
  type used to store the result.

  created 23 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int integerResult;
float decimalResult;

void setup() {
  // set up serial communication at 9600bps:
  Serial.begin(9600);
}
void loop() {
  integerResult = 12 / 5;
  decimalResult = 12.0 / 5.0;

  // print the results to the Serial Monitor
  Serial.print("Integer number result:");
  Serial.println(integerResult);  // expected output: 2
  Serial.print("Decimal number result:");
  Serial.println(decimalResult);  // expected output: 2.4

  // lock the program here (infinite loop)
  while (1);
}
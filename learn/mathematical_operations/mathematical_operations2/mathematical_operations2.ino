/*
  Mathematical Operations 2

  This program demonstrates the differences between integer division and floating-point division in Arduino.
  It shows how the results vary when dividing integers versus floating-point numbers.


  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int integerNumber1;
int integerNumber2;
int integerResult;
float decimalNumber;
float decimalResult;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {

  integerNumber1 = 136;
  integerNumber2 = 11;  
  decimalNumber = 136.0;
  
  // dividing two integers and assigning the result as integer
  integerResult = integerNumber1 / integerNumber2;
  Serial.print("Integer number / Integer number result = ");
  Serial.println(integerResult);

  // dividing two integers and assigning the result as decimal
  decimalResult = integerNumber1 / integerNumber2;
  Serial.print("Integer number / Integer number result (decimal result) = ");
  Serial.println(decimalResult);

  // converting integers to decimals with type conversion
  decimalResult = decimalNumber / integerNumber2;
  Serial.print("Decimal number / Integer number result = ");
  Serial.println(decimalResult);


  // converting integers to decimals with type conversion
  decimalResult = (float)integerNumber1 / (float)integerNumber2;
  Serial.print("(float) Integer number / (float) Integer number result = ");
  Serial.println(decimalResult);
 
 
  // lock the program here (infinite loop)
  while(1);
}

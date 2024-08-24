/*
  Mathematical Operations 1

  This program demonstrates basic mathematical operations (addition, subtraction, multiplication, and division)
  using integers in an Arduino sketch. The results are displayed on the Serial Monitor.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/


void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  int num1;
  int num2;
  int additionResult;
  int subtractionResult;
  int multiplicationResult;
  int divisionResult;


  num1 = 12;
  num2 = 6;

  additionResult = num1 + num2;  
  subtractionResult = num1 - num2;
  multiplicationResult = num1 * num2;
  divisionResult = num1 / num2;
  
  Serial.print("Addition result:");
  Serial.println(additionResult);

  Serial.print("Subtraction result:");
  Serial.println(subtractionResult);

  Serial.print("Multiplication result:");
  Serial.println(multiplicationResult);

  Serial.print("Division result:");
  Serial.println(divisionResult);
  
  // lock the program here (infinite loop)
  while(1);
}

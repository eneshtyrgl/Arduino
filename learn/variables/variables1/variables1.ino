/*
  Variables 1

  This sketch demonstrates the use of variables and basic arithmetic operations
  in Arduino. It shows how to perform addition and multiplication, and the 
  importance of type casting in arithmetic operations involving larger numbers.

  created 23 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int number1 = 12;
int number2 = 5;
int intResult;
long int longResult = 0;

void setup() {
  // set up serial communication at 9600bps:
  Serial.begin(9600);
}
void loop() {
  // perform addition:
  intResult = number1 + number2;
  Serial.print("12+5=");
  Serial.println(intResult);

  // perform multiplication:
  number1 = 1400;
  number2 = 1000;
  intResult = number1 * number2;
  Serial.print("1400 * 1000=");
  Serial.println(intResult);

  // without type casting:
  Serial.print("Without type casting 1400*1000=");
  longResult = number1 * number2;
  Serial.println(longResult);

  // with type casting:
  Serial.print("With type casting 1400*1000=");
  longResult = (long)(number1) * (long)(number2);
  Serial.println(longResult);

  // lock the program here (infinite loop)
  while (1);
}
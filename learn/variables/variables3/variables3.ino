/*
  Variables 3

  This code demonstrates the behavior of floating-point variables in Arduino.
  It specifically highlights the challenges with floating-point precision and 
  how to use absolute values to make more reliable comparisons.

  created 23 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
float number = 0.5;

void setup() {
  // set up serial communication at 9600bps:
  Serial.begin(9600);
}
void loop() {
  number = number - 0.1;   // subtract 0.1 from number each time
  if( number == 0 ){   // not works because floating-point precision issues
    Serial.println("Number equals zero!");
  }
  if( fabs(number) < 0.0001 ){   // using the absolute value
    Serial.println("Number is very close to zero!");
  }
  if( number < -0.5 ) {
      // lock the program here (infinite loop)
      number = 0.5;
  }
  Serial.println(number);
  delay(500);
}
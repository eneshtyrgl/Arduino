/*
  Variables 6

  
  This program demonstrates the use of the `#define` preprocessor directive to create
  a constant value that controls the delay between printing characters to the serial monitor.
  It prints the word "ARDUINO" character by character with a consistent delay.

  created 23 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
#define COOLDOWN 200 // ms
char characterA = 'A';
char characterR = 'R';
char characterD = 'D';
char characterU = 'U';
char characterI = 'I';
char characterN = 'N';
char characterO = 'O';

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}
void loop() {
  // print each character to the serial monitor with a delay of 200 milliseconds between each
  Serial.print(characterA);
  delay(COOLDOWN);
  Serial.print(characterR);
  delay(COOLDOWN);
  Serial.print(characterD);
  delay(COOLDOWN);
  Serial.print(characterU);
  delay(COOLDOWN);
  Serial.print(characterI);
  delay(COOLDOWN);
  Serial.print(characterN);
  delay(COOLDOWN);
  Serial.println(characterO);
  delay(COOLDOWN);
}

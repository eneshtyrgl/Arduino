/*
  Variables 4

  This program prints the word "ARDUINO" over the serial port using character variables.
  Each character is printed one at a time with a short delay between each letter.

  created 23 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
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
  delay(200);
  Serial.print(characterR);
  delay(200);
  Serial.print(characterD);
  delay(200);
  Serial.print(characterU);
  delay(200);
  Serial.print(characterI);
  delay(200);
  Serial.print(characterN);
  delay(200);
  Serial.println(characterO);
  delay(200);
}

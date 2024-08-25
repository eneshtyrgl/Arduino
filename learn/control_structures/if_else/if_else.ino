/*
  Control Structures 1

  This sketch demonstrates the use of control structures in Arduino, 
  specifically the use of an `if-else` statement to control an LED 
  based on the state of a button. When the button is pressed, the 
  LED lights up; when the button is not pressed, the LED turns off.

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int buttonPin = 2;   // pin to which the button is connected
int ledPin =  13;   // pin to which the LED is connected
int buttonState = 0;   // variable to hold the button state

void setup() {
  pinMode(ledPin, OUTPUT);   // set LED pin as output
  pinMode(buttonPin, INPUT);   // set button pin as input
}

void loop() {
  buttonState = digitalRead(buttonPin);   // read the button input
  // if button input is 1 (HIGH), set LED output to 1 (HIGH)
  if (buttonState == HIGH) {     
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}

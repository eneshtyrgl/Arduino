/*
  Control Structures 8

  Example of turning an LED on and off without using the delay() function.
  The LED connected to digital pin 13 on the Arduino UNO board is turned on and off
  at a frequency determined by the variable `onOffInterval`.
  This operation is performed using the millis() function instead of delay().

  created 25 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
// #define ledPin LED_BUILTIN
const int ledPin =  13;  // LED pin
int ledState = LOW;   // variable representing the LED's state
long previousTimeValue = 0;   // variable to hold the last time the LED state was changed
long onOffInterval = 1000;   // LED blink interval in ms

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  unsigned long currentTimeValue = millis();

  if (currentTimeValue - previousTimeValue > onOffInterval) {
    // Save the current time for the next cycle
    previousTimeValue = currentTimeValue;   

    // Change the LED's state
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // Update the LED state
    digitalWrite(ledPin, ledState);
  }
}

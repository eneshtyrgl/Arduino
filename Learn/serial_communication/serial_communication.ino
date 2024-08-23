/*
  Serial Communication

  This sketch demonstrates basic serial communication 
  between an Arduino and a computer. It continuously 
  sends a message over the serial port every second.

  created 23 Aug 2024
  by Enes İhtiyaroğlu
*/



// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // print out the state of the button:
  Serial.println("Hello from Arduino to Computer");
  delay(1000);  // delay in between reads for stability
}

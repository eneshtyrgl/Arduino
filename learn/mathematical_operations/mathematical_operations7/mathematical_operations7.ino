/*
  Mathematical Operations 7

  This program calculates and prints the sine and cosine of angles ranging from -90 to 90 degrees.

  created 24 Aug 2024
  by Enes İhtiyaroğlu
*/

// define variables
int angle_d;
float angle_r;

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop() {
  for(angle_d=-90; angle_d<=90; angle_d++) {
    // Convert the angle from degrees to radians
    angle_r = angle_d * DEG_TO_RAD;   // PI/180
    
    Serial.print("Angle:");
    Serial.print(angle_d);
    Serial.print(" Sin:");
    Serial.print(sin(angle_r), 4);
    Serial.print(" Cos:");
    Serial.println(cos(angle_r), 4);
  }


  // lock the program here (infinite loop) 
  while(1); 
}

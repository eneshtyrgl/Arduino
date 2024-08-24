/*
  Series 2

  explain code

  This program demonstrates how to work with a two-dimensional array in Arduino.
  It prints the elements of the array along with their indices to the Serial Monitor.

*/

// define variables
int i,j;
int twoDimensionArray[4][5] = { {1, 2, 3, 4, 5}, 
                             {11, 12, 13, 14, 15}, 
                             {10 ,20 ,30, 40, 50},
                             {14, 23, 45, 57, 63}};

void setup() {
  Serial.begin(9600);  // set up serial communication at 9600 bits per second
}

void loop(){
  for(i = 0; i<4; i++){
    for(j= 0; j<5; j++){
      Serial.print("i=");
      Serial.print(i);
      Serial.print(" j=");
      Serial.print(j);
      Serial.print("Array Element=");
      Serial.println(twoDimensionArray[i][j]);
      delay(1000);
    }
  }
}
#include <Arduino.h>

// #define RED_LED D0

// void setup()
// {
//   Serial.begin(115200);
//   pinMode(BUILTIN_LED, OUTPUT);
//   pinMode(RED_LED, OUTPUT);
// }

// void loop()
// {
//   digitalWrite(RED_LED, HIGH);    // LED RED menyala
//   digitalWrite(BUILTIN_LED, LOW); // LED BLUE mati
//   delay(1000);                    // jeda 1000 nsf
//   digitalWrite(RED_LED, LOW);
//   digitalWrite(BUILTIN_LED, HIGH);
//   delay(1000);
// }

void setup() {
  pinMode(D0, OUTPUT);
}
 
void loop() {
  digitalWrite(D0, HIGH);
  delay(1000);           
  digitalWrite(D0, LOW); 
  delay(1000);           
}
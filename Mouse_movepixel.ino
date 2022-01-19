#include <Mouse.h>
void setup(){
  Mouse.begin();
  pinMode(1, OUTPUT);
}
 
void loop() {
  while(true) {
    digitalWrite(1, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(5000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(5000);                       // wait for a second  
    Mouse.move(3,0,0); // 2px right
    delay(300000);
    Mouse.move(-3,0,0); // 2px left
    digitalWrite(1, LOW);
    delay(300000);
  }
}

#include <Mouse.h>
void setup(){
  Mouse.begin();
  pinMode(1, OUTPUT);
}
 
void loop() {
  while(true) {
    digitalWrite(1, HIGH);  
    Mouse.move(2,0,0); // 2px right
    delay(50);
    Mouse.move(-2,0,0); // 2px left
    digitalWrite(1, LOW);
    delay(50);
  }
}

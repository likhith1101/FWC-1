#include<Arduino.h>
void setup() {

  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
}

void loop() {
bool  X, Y,Z , F;
X = digitalRead(3);
Y = digitalRead(4);
Z = digitalRead(5);

F=!(!(X^Y)^Z);
digitalWrite(5,F);
}

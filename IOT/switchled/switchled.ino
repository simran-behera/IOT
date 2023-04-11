#include<SoftwareSerial.h>
int led=13;
int sw=2;
int state=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(sw,INPUT);

}

void loop() {
  state=digitalRead(sw);
  if(state==LOW)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
}

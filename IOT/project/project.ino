#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
const int rs=6,en=7,d4=5,d5=4,d6=3,d7=2;
int ldr=13;
int ir=12;
int led1=11;
int led2=10;
int state1,state2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
pinMode(ldr, INPUT);
pinMode(ir, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
lcd.begin(16,2);
lcd.print("SMART STREET");
lcd.setCursor(0,1);
lcd.print("LIGHTS");
delay(2000);
lcd.clear();

}

void loop() {
  state1=digitalRead(ldr);
  state2=digitalRead(ir);

if(state1==HIGH)
digitalWrite(led1, HIGH);
else
digitalWrite(led1,LOW);

if(state2==HIGH)
digitalWrite(led2, HIGH);
else
digitalWrite(led2,LOW);
}

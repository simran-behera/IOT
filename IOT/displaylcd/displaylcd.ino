#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
const int rs=6,en=7,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
lcd.begin(16,2);
lcd.print("CMREC");
lcd.setCursor(0,1);
lcd.print("IOT PROJECT TRAINING");
delay(2000);
lcd.clear();
}

void loop() {

}

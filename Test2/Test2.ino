
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int greenSwitchPin = 6;
const int redSwitchPin = 8;
const int blueSwitchPin = A0;
int switchStateGreen = 0;
int switchStateBlue = 0;
int switchStateRed = 0;
const int motorPin = 13;
int prevSwitchState = 0;
int reply;
void setup() {
  lcd.begin(16, 2);
  lcd.print("Programming");
  lcd.setCursor(0, 1);
  lcd.print("Robotics 2017");
  delay(5000);
  lcd.clear();
  lcd.begin(16, 2);
  lcd.print("Thandie Boudreaux");
  lcd.setCursor(0, 1);
  lcd.print("Shashwath Keta");
  pinMode(7, OUTPUT);
  delay(5000);
  lcd.clear();
  pinMode(greenSwitchPin,INPUT);
  pinMode(redSwitchPin, INPUT);
  pinMode(blueSwitchPin, INPUT);
}

void loop() {
  switchStateRed = digitalRead(redSwitchPin);
  switchStateBlue = analogRead(blueSwitchPin);
  switchStateGreen = digitalRead(greenSwitchPin);
  if(switchStateRed != prevSwitchState) {
    if (switchStateRed == HIGH) {
      analogWrite(A1, 1023);
    }
  }
} 
 


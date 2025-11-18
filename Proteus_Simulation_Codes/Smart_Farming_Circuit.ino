#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10,  9,  8);

const int Fan_Pin = 6;
const int Pump_Pin = 7;

void setup() 
{
  lcd.begin(20, 4); 
  lcd.setCursor(0, 0); 
  lcd.print("    SMART FARMING");

  pinMode(Fan_Pin, OUTPUT);
  pinMode(Pump_Pin, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() 
{
  //Temperature Sensing 
  int S1 = analogRead(A0); 
  float mV = (S1/1023.0)*5000; // Storing value in Celsius Degree
  int Temp = mV/10;
  lcd.setCursor(0,1);
  lcd.print("Tem.= ");
  lcd.print(Temp);
  lcd.print("'C");

  //Rain Sensing 
  int R = digitalRead(A1);
  if(R == 0){
    lcd.setCursor(11,1);
    lcd.print("Rain= NO ");
  }
  if(R == 1){
    lcd.setCursor(11,1);
    lcd.print("Rain= YES");
  }
  
  //Soil Moisture
  int S3 = analogRead(A2);
  int SM = S3/10;
  lcd.setCursor(0,2);
  lcd.print("Mois.= ");
  lcd.print(SM);
  lcd.print("%");

  //Air Humidity
  int S4 = analogRead(A3);
  int H = S4/10;
  lcd.setCursor(11,2);
  lcd.print("Hum.= ");
  lcd.print(H);
  lcd.print("%");
  
  if(Temp>30){
    digitalWrite(Fan_Pin, HIGH);
    lcd.setCursor(0,3);
    lcd.print("Fan: ON ");
  }
  else{
    digitalWrite(Fan_Pin, LOW);
    lcd.setCursor(0,3);
    lcd.print("Fan: OFF");
  }

  if(SM<40 && R==0){
    digitalWrite(Pump_Pin, HIGH);
    lcd.setCursor(11,3);
    lcd.print("Pump: ON ");
  }  
  else{
    digitalWrite(Pump_Pin, LOW);
    lcd.setCursor(11,3);
    lcd.print("Pump: OFF");
  }
}

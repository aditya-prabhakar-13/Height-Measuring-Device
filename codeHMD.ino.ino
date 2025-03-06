#include <LiquidCrystal.h> 


#define max_distance 200


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
int distance1;
void setup() 
{
  lcd.begin(16,2);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  

  distance= duration*0.034/2;
  distance1= 180 - distance ;

  lcd.setCursor(0,0);
  lcd.print("HEIGHT: ");
  lcd.print(distance1);
  lcd.print("  cm  ");
  delay(500);
}
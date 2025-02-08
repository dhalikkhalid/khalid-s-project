#include <Servo.h>

Servo myServo;


const int redLed = 10;
const int blueLed = 11;
const int buttonPin = 2;


int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);

  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(buttonPin, INPUT);

  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:        
  buttonState = digitalRead(buttonPin);

control();

}


  void control(){
    
    if(buttonState == HIGH){
      myServo.write(90);
      digitalWrite(blueLed, HIGH);
      digitalWrite(redLed, LOW);
      
      }
    else if(buttonState == LOW){
      myServo.write(0);
      digitalWrite(blueLed, LOW);
      digitalWrite(redLed, HIGH);
      }
    
    }

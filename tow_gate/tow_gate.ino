#include <Servo.h>

Servo myServo;

const int trigPin = 8;
const int echoPin = 7;
const int redLed = 10;
const int blueLed = 11;
const int buttonPin = 2;

long duration;
int distance;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(buttonPin, INPUT);

  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:        
  buttonState = digitalRead(buttonPin);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  
behaviour();
control();

}





void behaviour(){
  
  if(distance < 10){
    
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, HIGH);

    Serial.println("vehicle awaiting service ");
    
     }
  else if{

    digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, LOW);

    Serial.println("no vehicle awaiting service ");
    }
  
  delay(100);
  
  
  }

  void control(){
    
    if(buttonState == HIGH){
      myServo.write(90);
      
      }
    else{
      myServo.write(0);
      }
    
    }

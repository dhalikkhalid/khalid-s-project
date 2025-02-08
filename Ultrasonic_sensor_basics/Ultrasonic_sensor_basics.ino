#include <Servo.h>


int distance;
int duration;


Servo myservo;
const int trigPin = 11;
const int echoPin = 10;
int ledNeg = 9;
int ledPos = 5;
int servo = 6;
int pos = 0;


void setup() {
  // put your setup code here, to run once:

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);

  myservo.attach(6);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  delay(1000);
  digitalWrite(trigPin, LOW);
 delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
  



  duration = pulseIn(echoPin, HIGH, 30000);

  distance = duration * 0.034 / 2;

  Serial.print("Distance :" );
  Serial.print(distance);
  Serial.println(" cm" );
  alarm();
  servoControl();
  easy();

}

void alarm(){

  if(distance > 0 ){

    digitalWrite(ledNeg, HIGH);
//    delay(100);
//    digitalWrite(ledNeg, HIGH);
//    delay(100);
    digitalWrite(ledPos, LOW);
    }

  else if(distance <= 0){

    digitalWrite(ledPos, HIGH);
    digitalWrite(ledNeg, LOW);
    }

}
void easy(digitalWrite(ledNeg, HIGH)){

  while(true){
      digitalWrite(ledPos, LOW);
    }

    
  
  
  }


  
 void servoControl() {
  for (pos = 0; pos <= 180; pos += 5) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 5) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);    
  
  }
 }

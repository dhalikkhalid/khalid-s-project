//#include <Servo.h>

//Servo myservo;
int distance;
int duration;


const int trigPin = 11;
const int echoPin = 10;
int ledBad = 6;
int ledGood = 5;
//int servo = 3;
//int pos = 0;
 
void setup() {
  // put your setup code here, to run once:

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(ledBad, OUTPUT);
  pinMode(ledGood, OUTPUT);

//  myservo.attach(3);

  Serial.begin(115200);
  

}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);
  

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  delay(100);
//  Serial.print("Distance from intruder : ");
//  Serial.print(distance);
//  Serial.println(" cm");


  intruder();
//rotation();
  

}



void intruder(){
  
    if (distance > 0 && distance < 11){
      
    Serial.print(" There is an intruder ");
    Serial.print(distance);
    Serial.println(" cm away");

    digitalWrite(ledBad, HIGH);
    delayMicroseconds(10000000);
    digitalWrite(ledBad, LOW);
    delayMicroseconds(10000000);
    digitalWrite(ledGood, LOW);
      
      }

    else if( distance > 11){

    Serial.println(" There is no intruder ");

    digitalWrite(ledGood, HIGH);
    digitalWrite(ledBad, LOW);

   
    }

  
  }


////  void rotation(){
//
////    for(pos = 0; pos <= 180;pos +=15){
//
//        myservo.write(pos);
//        delay(500);
//      
//      }
//
//      for(pos = 180; pos >= 0;pos -=15){
//
//        myservo.write(pos);
//        delay(500);
//      
//      }
//    
//    
//    
//    
//    }

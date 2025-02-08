const int trigPin = 9;
const int echoPin = 10;
int redLed = 8;
int blueLed = 7;

long duration;
int distance;


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, LOW);
  delay(2);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);


  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);

  if(distance > 10 || distance == 0){
         digitalWrite(blueLed, HIGH);
            digitalWrite(redLed, LOW);
    }
    else if(distance <= 10 && distance > 0){
      digitalWrite(blueLed, LOW);
            digitalWrite(redLed, HIGH);
      
      }

}

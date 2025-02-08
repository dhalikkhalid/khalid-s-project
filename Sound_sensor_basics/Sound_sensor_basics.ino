const int soundSensorPin = A0;
const int ledPin = 10;

int soundLevel;
int threshold = 527x ;

bool ledState = false;
bool clapDetected = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  soundLevel = analogRead(soundSensorPin);

  Serial.println(soundLevel);

  control();

}

void control(){

  if(soundLevel > threshold && !clapDetected){

    clapDetected = true;

    ledState = !ledState;
    
    digitalWrite(ledPin,ledState ? HIGH : LOW);
    
    }

  else if(soundLevel < threshold ){

      clapDetected = false;
    
    }
  
   delay(50);
  }

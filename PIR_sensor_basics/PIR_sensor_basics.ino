int pirPin = 9;

int ledPin = 10;

int pirState = LOW;

void setup() {
  // put your setup code here, to run once:

  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  pirState = digitalRead(pirPin);

  if(pirState == HIGH){
    
    digitalWrite(ledPin, HIGH);
      Serial.println("Motion detected!!!");
      delay(1000);
    
  }else{
    
    digitalWrite(ledPin, LOW);

    Serial.println("No Motion. ");
    }

 
}

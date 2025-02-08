int ledpin = 10;

int arr[3] = {7,6,8};
==
//void RETURN(){
//  digitalWrite(ledpin, HIGH);
//
//  delay(1000);
//
//  digitalWrite(ledpin, LOW);
//
//  delay(1000);
//  }
void blinkRate(int stayOn, int stayOff){

digitalWrite(ledpin, HIGH);

  delay(stayOn);
  
  digitalWrite(ledpin, LOW);

  delay(stayOff);
  }

void setup() {
  // put your setup code here, to run once:

  pinMode(ledpin, OUTPUT); // pin 13 has been set as an output pin

   Serial.begin(9600);
  
  for(int i = 0; i<3; i++){
    
  Serial.print("The value of arr[0]: ");

  Serial.println(arr[i]);

  }
}

void loop() {
  // put your main code here, to run repeatedly:

//  RETURN();
  blinkRate(1000,5000);

}

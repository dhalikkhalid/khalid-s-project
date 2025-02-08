int ldrpin = 5;
int ledpin = 8;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(ldrpin, INPUT);
  pinMode(ledpin, OUTPUT);
  
    

}

void loop() {
  // put your main code here, to run repeatedly:

bool threshold = digitalRead(ldrpin);

Serial.print("Ligfht threshold : ");
Serial.println(threshold);

if( threshold == 0 ){
  
  digitalWrite(ledpin, HIGH);
  

  
  }

else{
  
  digitalWrite(ledpin, LOW);
  
  
  }


}

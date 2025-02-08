#include <DHT_U.h>
#include <DHT.h>
#define DHTPIN 9
#define DHTTYPE DHT11

int ledbad = 10;
int ledgood = 11;

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  dht.begin();

  pinMode (ledgood, OUTPUT);
  pinMode (ledbad, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  float temperature = 
  dht.readTemperature();

  if (isnan(temperature)){
    Serial.println("Failed to read from DHT sensor!");
    return;
    }

  Serial.println("Temperature:");
  Serial.print(temperature );
  Serial.println(" C");

  if (temperature > 30){
    
    digitalWrite(ledbad, HIGH);
    digitalWrite(ledgood, LOW);
    }
    else if(temperature <= 29){
      digitalWrite(ledgood, HIGH);
      digitalWrite(ledbad, LOW);
      }

}

// (MOTOR A)controls the front left and front right wheel.
#define ENA 3
#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7
#define ENB 9

// (MOTOR B)controls the rear left and rear right wheel.
#define ENAi 10
#define IN1i 11
#define IN2i 12
#define IN3i 13
#define IN4i 2
#define ENBi 8
void setup() {
  // put your setup code here, to run once:

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(ENAi, OUTPUT);
  pinMode(IN1i, OUTPUT);
  pinMode(IN2i, OUTPUT);
  pinMode(IN3i, OUTPUT);
  pinMode(IN4i, OUTPUT);
  pinMode(ENBi, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

}



void moveForward(){
    
    analogWrite(ENA, 150);
    analogWrite(ENB, 150);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    analogWrite(ENAi, 150);
    analogWrite(ENBi, 150);
    digitalWrite(IN1i, HIGH);
    digitalWrite(IN2i, LOW);
    digitalWrite(IN3i, HIGH);
    digitalWrite(IN4i, LOW);
   
      }
      
void moveBackward(){
    
    analogWrite(ENA, 150);
    analogWrite(ENB, 150);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    analogWrite(ENAi, 150);
    analogWrite(ENBi, 150);
    digitalWrite(IN1i, HIGH);
    digitalWrite(IN2i, LOW);
    digitalWrite(IN3i, HIGH);
    digitalWrite(IN4i, LOW);
    }

void turnLeft(){
    
    analogWrite(ENA, 150);
    analogWrite(ENB, 150);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    analogWrite(ENAi, 150);
    analogWrite(ENBi, 150);
    digitalWrite(IN1i, LOW);
    digitalWrite(IN2i, HIGH);
    digitalWrite(IN3i, HIGH);
    digitalWrite(IN4i, LOW);
    }
void turnRight(){
    
    analogWrite(ENA, 150);
    analogWrite(ENB, 150);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    analogWrite(ENAi, 150);
    analogWrite(ENBi, 150);
    digitalWrite(IN1i, HIGH);
    digitalWrite(IN2i, LOW);
    digitalWrite(IN3i, LOW);
    digitalWrite(IN4i, HIGH);
    }

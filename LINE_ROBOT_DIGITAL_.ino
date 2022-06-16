#define LeftMotorForward 2
#define LeftMotorBackward 3
#define RightMotorForward 4
#define RightMotorBackward 5 

#define leftIR 6 
#define rightIR 7

void setup() {
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT) ;
  pinMode(LeftMotorBackward, OUTPUT) ;
  pinMode(RightMotorBackward, OUTPUT) ;
  pinMode(leftIR,INPUT) ;
  pinMode(rightIR, INPUT) ;

  Serial.begin(9600) ;

}

void loop() {
 if (digitalRead(leftIR)==LOW && digitalRead(rightIR)==LOW)
 
 {
  digitalWrite(LeftMotorForward, HIGH) ;
  digitalWrite(RightMotorForward, HIGH) ;
 }
else if (digitalRead(leftIR)==HIGH && digitalRead(rightIR)=HIGH)
{
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorForward, LOW) ;
  
}
else if (digitalRead(leftIR)== HIGH && digitalRead(rightIR)=LOW)
{
  digitalWrite(LeftMotorForward,LOW) ;
  digitalWrite(RightMotorForward,HIGH) ;
  
}
}

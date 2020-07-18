int sensor1=2;
int sensor2=3;
int rightMTR=6;
int IN1=7;
int leftMTR=8;
int IN2=9;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor1,INPUT);
pinMode(sensor1,INPUT);
pinMode(rightMTR,OUTPUT);
pinMode(IN1,OUTPUT);
pinMode(leftMTR,OUTPUT);
pinMode(IN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(sensor1==1) && (sensor2==1))
{
  //Forword
  digitalWrite(IN1,1);
  digitalWrite(rightMTR,0);
  digitalWrite(IN2,1);
  digitalWrite(leftMTR,0);
  
}
if(digitalRead(sensor1==0) && (sensor2==1))
{
  //Turn Right
  digitalWrite(IN1,0);
  digitalWrite(rightMTR,1);
  digitalWrite(IN2,1);
  digitalWrite(leftMTR,0);
  
}
if(digitalRead(sensor1==1) && (sensor2==0))
{
  //Turn Left
  digitalWrite(IN1,1);
  digitalWrite(rightMTR,0);
  digitalWrite(IN2,0);
  digitalWrite(leftMTR,1);
  
}
if(digitalRead(sensor1==0) && (sensor2==0))
{
  //stop
  digitalWrite(IN1,0);
  digitalWrite(rightMTR,0);
  digitalWrite(IN2,0);
  digitalWrite(leftMTR,0);
  
}

}

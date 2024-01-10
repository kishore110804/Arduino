int sensor=2;
int led=13;
int buzzer=9;
int state=LOW;
int val=0;

void setup() {
 pinMode(sensor,INPUT);
 pinMode(led,OUTPUT);
 pinMode(buzzer,OUTPUT);
 Serial.begin(9600);

}

void loop() {
val=digitalRead(sensor);
if(val==HIGH){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(400);
}
else{
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);  
}
}

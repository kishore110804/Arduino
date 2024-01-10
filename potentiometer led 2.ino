int Potentialvalue1;  
int Potentialvalue2;
void setup()
{ Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop()
{
  Serial.print("READING : ");
  Serial.print(potentialvalue1);
  Serial.println();
  delay(2000);
  Potentialvalue1 = (analogRead(A0));
  Potentialvalue2 = map(Potentialvalue1,0,1023,0,100);
  if(( (Potentialvalue2)<(50) )){
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(1000);

}
 else {
 digitalWrite(8, LOW);
 digitalWrite(9, HIGH);
 delay(1000);
 }

}

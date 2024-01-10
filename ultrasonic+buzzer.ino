int CM(int trigPin, int echoPin)
{
  long duration;
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  duration = duration / 59;
  if ((duration < 2) || (duration > 300)) return false;
  return duration;
}


void setup()
{
  Serial.begin(9600);
  digitalWrite( 9 , LOW );

  pinMode( 13 , OUTPUT);
}

void loop()
{
  Serial.print(	CM( 9 , 8 ));
  Serial.print(" ");
  Serial.println();
  delay( 1000 );
  if (( (CM(9, 8 ) ) <= ( 100 ) ))
  {
    digitalWrite(13 , LOW);
    noTone(8);
  }
  else
  {
    digitalWrite(13 , HIGH);
    tone(8, 440, 1000);
  }
}

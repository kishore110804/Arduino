#include<softwareSerial.h>
SoftwareSerial bt(3,2)

void setup(){
  bt.begin(9600);
  Serial.Begin(9600);

}

void loop{
  if(bt.available())
{
    Serial.Write(bt.read());
}    
  if(serial.avaialable())
 {
    bt.write(serial.read());

 } 
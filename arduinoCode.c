
int inbyte = 0;     
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop()
{
  if(Serial.available()>0 )
 {
    inbyte=Serial.read();
    if(inbyte=='R')
 {digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
 }
 else if (inbyte=='L')
 {
 digitalWrite(13,LOW);  
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 }
 else if (inbyte=='F')
 {digitalWrite(13,HIGH);  
 digitalWrite(12,LOW);
 digitalWrite(11,HIGH);
 digitalWrite(10,LOW);
 }
 else if (inbyte=='B')
 {digitalWrite(13,LOW);  
 digitalWrite(12,HIGH);
 digitalWrite(11,LOW);
 digitalWrite(10,HIGH);
 }
 else 
 {digitalWrite(13,HIGH);  
 digitalWrite(12,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 }
  }
}

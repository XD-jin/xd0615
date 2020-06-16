void setup()
{
  int i=0;
  for(i=0;i<8;i++)
  {
 	pinMode(i,OUTPUT);
  }
    
}

void loop()
{
  int j;
  //digitalWrite(1,HIGH);
  for(j=0;j<8;j++)
  {
  digitalWrite(j,HIGH);
  delay(500); 
  digitalWrite(j,LOW);
  digitalWrite(7-j,HIGH);
  delay(500);
  digitalWrite(7-j,LOW); 
  delay(1000);
  }
}
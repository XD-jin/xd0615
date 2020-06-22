#include <MsTimer2.h>
int time=0;
int m,n,x,y;
void ontime ()
{
	time++;
  if(time==10)
}
void oninterrupt ()
{
	time=0;
}
void setup()
{
  Serial.begin(9600);
	int i;
  for(i=8;i<12;i++)
  {
  	pinMode(i,OUTPUT);
  }
  pinMode(2,INPUT);
  MsTimer2::set(1000,ontime);
  MsTimer2::start();
  attachInterrupt(digitalPinToInterrupt(2),oninterrupt,CHANGE);
  m=time&0x01;
  n=(time>>1)&0x01;
  x=(time>>2)&0x01;
  y=(time>>3)&0x01;
  digitalWrite(8,m);
 digitalWrite(9,n);
 digitalWrite(10,x);
 digitalWrite(11,y);

}
void loop ()
{
  m=time&0x01;
  n=(time>>1)&0x01;
  x=(time>>2)&0x01;
  y=(time>>3)&0x01;
  digitalWrite(8,m);
 digitalWrite(9,n);
 digitalWrite(10,x);
 digitalWrite(11,y);

}
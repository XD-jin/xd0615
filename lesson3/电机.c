/*
����
'f':��ʾǰ��
'b':��ʾ����
'r':��ʾ��ת
'l':��ʾ��ת
's':��ʾֹͣ
*/
char intput=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.println("ok!");
}

void ctrl (char)
{
   switch(intput)
    {
    case 'f':
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      break;
    case 'b':
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      break;
    case 'r':
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      break;
    case 'l':
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      break;
    case 's':
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      break;
    default:
      break;
    }
}
void loop()
{
  if(Serial.available()>0)
  {
   intput=Serial.read();
    ctrl(intput);
  }
}

#include <Servo.h>//�����ŷ�ͷ�ļ�

int pos = 0;

Servo servo_9;//����΢���ŷ�������

void setup()
{
  servo_9.attach(9);//����ARDUINO�ϵĽӿ�

}

void loop()
{
  for (pos = 0; pos <= 180; pos += 1) //��ʱ����ת180��
  {
    servo_9.write(pos);//����΢���ŷ���ת�ĽǶ�,������󲻳���180
    delay(15); //ÿת��1������Ҫ15ms
  }
  for (pos = 180; pos >= 0; pos -= 1) //˳ʱ����ת180��
  {
    
    servo_9.write(pos);����΢���ŷ���ת�ĽǶ�,������󲻳���180
    delay(15);//�ȴ��ŷ�ת��1��
  }
}
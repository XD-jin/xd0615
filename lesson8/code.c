
#include <Servo.h>//控制伺服头文件

int pos = 0;

Servo servo_9;//定义微型伺服变量名

void setup()
{
  servo_9.attach(9);//定义ARDUINO上的接口

}

void loop()
{
  for (pos = 0; pos <= 180; pos += 1) //逆时针旋转180°
  {
    servo_9.write(pos);//设置微型伺服旋转的角度,数据最大不超过180
    delay(15); //每转过1°大概需要15ms
  }
  for (pos = 180; pos >= 0; pos -= 1) //顺时针旋转180°
  {
    
    servo_9.write(pos);设置微型伺服旋转的角度,数据最大不超过180
    delay(15);//等待伺服转过1°
  }
}
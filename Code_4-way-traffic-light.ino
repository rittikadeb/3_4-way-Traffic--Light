#include <Servo.h>

int red1 = 13;
int yellow1 = 12;
int green1 = 11;
int red2 = 10;
int yellow2 = 9;
int green2 = 8;
int red3 = 7;
int yellow3 = 6;
int green3 = 5;
int red4 = 4;
int yellow4 = 3;
int green4 = 2;
Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;


void setup()
{
  servo_1.attach(11);
  servo_2.attach(8);
  servo_3.attach(5);
  servo_1.attach(2);
  for(int i = 2; i<=13; i++) 
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{ 
  direction(red1, yellow1, green1, red2, yellow2, green2, red3, yellow3, green3, red4, yellow4, green4);
  direction(red2, yellow2, green2, red1, yellow1, green1, red3, yellow3, green3, red4, yellow4, green4);
  direction(red3, yellow3, green3, red1, yellow1, green1, red2, yellow2, green2, red4, yellow4, green4);
  direction(red4, yellow4, green4, red1, yellow1, green1, red2, yellow2, green2, red3, yellow3, green3);
}

void direction(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  servo_1.write(0);
  servo_2.write(180);
  servo_3.write(180);
  servo_4.write(180);
  
  digitalWrite(d, HIGH);
  servo_1.write(180);
  servo_2.write(0);
  servo_3.write(180);
  servo_4.write(180);
  
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  servo_1.write(180);
  servo_2.write(180);
  servo_3.write(0);
  servo_4.write(180);
  
  digitalWrite(h, LOW);
  digitalWrite(i, LOW);
  digitalWrite(j, HIGH);
  servo_1.write(0);
  servo_2.write(0);
  servo_3.write(0);
  servo_4.write(180);
  
  digitalWrite(k, LOW);
  digitalWrite(l, LOW);
  delay(5000);
  digitalWrite(c, LOW);
  digitalWrite(b, HIGH);
  delay(3000);
}

#include<Servo.h>
Servo servo;
void setup() {
  pinMode(A5,"INPUT");
  servo.attach(9);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  int hasil = map(analogRead(A5),0,1023,0,180);
  Serial.println(hasil);
  servo.write(hasil);
}

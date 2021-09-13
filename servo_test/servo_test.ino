#include<Servo.h>
Servo servo;
void setup() {
  // pin A5 buat potensialmeter
  pinMode(A5,"INPUT");
  // Pin 9 buat servo
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  int hasil = map(analogRead(A5),0,1023,0,180);
  Serial.println(hasil);
  servo.write(hasil);
}

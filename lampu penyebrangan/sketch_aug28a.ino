// C++ code
//

int i = 0;
int t = 30;

// 13 sebagai Tombol inputnya
// 12 Sebagai pin buat lampu hijau
// 11 Sebagai pin buat lampu kuning
// 10 Sebagai pin buat lampu merah
// 9 Sebagai pin buat buzzer

void setup()
{
  pinMode(13,INPUT);
  pinMode(12,OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  int hasil = digitalRead(13);
  if(hasil == 0){
    digitalWrite(12,LOW);
    digitalWrite(10,HIGH);
    for(i=0;i<t;i++){
      digitalWrite(11,HIGH);tone(9,440,500);
      delay(500);
      digitalWrite(11,LOW);
      delay(500);
    }
    digitalWrite(10,LOW);
  }
  else{
    digitalWrite(12,HIGH);
  }
}

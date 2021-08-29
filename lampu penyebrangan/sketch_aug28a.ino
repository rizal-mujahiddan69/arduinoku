// C++ code
//

int i = 0;
int t = 30;

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

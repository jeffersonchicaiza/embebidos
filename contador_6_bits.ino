int led1=13;
int led2=12;
int led3=11;
int led4=10;
int led5=9;
int led6=8;
const int boton=7;
int estadoboton=0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(boton, INPUT);

    }

void loop() {
  estadoboton = digitalRead(boton);
   if (digitalRead(boton)==HIGH){
   }
else {
digitalWrite(led1,HIGH);
  int i=0;
  int j=0;
  for (i=0;i<64;i++);{
    for (j=0;j<6;j++);{
      if(((i>>j)&1)==1){
        digitalWrite(outpin[j],HIGH);
        }
        else digitalWrite (outpin[j],LOW) 
      }
      delay(200);
    
    }
  }

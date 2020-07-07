/*
 * 
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd {13,12,11,10,9,8};//RS,E, D4 D5 D6 D7

int motor=6;
String palabra;
int maximo;
int minimo;
int conversor=0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(motor,OUTPUT);

  Serial.println("Ingrese el valor minimo y maximo con el siguiente formato");
  Serial.println("minimo,maximo");
  Serial.println("Ejemplo:");
  Serial.println("30,180");
  
}

void loop() {
//-----Ingresar datos-----------------------
  if(Serial.available()>0 ){
    palabra=Serial.readString();
    minimo=palabra.substring(0,palabra.indexOf(',')).toInt();
    maximo=palabra.substring(palabra.indexOf(',')+1,palabra.length()).toInt();
    Serial.println("");
    Serial.print("Valor minimo: ");
    Serial.println(minimo);
    Serial.print("Valor maximo: ");
    Serial.println(maximo);    
    }
//------potenciometro e imprimir en lcd-----------
  conversor=analogRead(0);
  conversor=map(conversor,0,1023,minimo,maximo);
  
  analogWrite(motor,conversor);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Velocidad");
  lcd.setCursor(0,1);
  lcd.print(conversor);
  delay(300);}

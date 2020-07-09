// reloj despertador
#include <MsTimer2.h>
int hora=0;
int minutos=1;
int h;
int m;
String datos;
String hor;
String minu; 
int alarma=0;

void setup() {
 Serial.begin(9600);
   MsTimer2::set(1000,reloj);
  MsTimer2::stop(); 
  Serial.println("ingrese Alarma hora y minuto ejemplo 8:15");
  }

void loop() {
if(Serial.available()>0){ //verifica si hay datos en consola
    
    datos=Serial.readString();// se guarda el lo que se ingresa en terminal en la variable dato
    Serial.println(" ");
   
    hor=datos.substring(0,datos.indexOf(':'));// guarda el dato antes de la coma
    minu=datos.substring( datos.indexOf(':')+1,datos.length());// guarda el dato despues de la coma 
    
    h=hor.toInt();
    m=minu.toInt();
    MsTimer2::start();
    delay(500);
    }
if(minutos==m && hora==h){
  alarma=1;
    }

    if(alarma==1){
      Serial.println (" despierta");
      delay(600);
      }
 
}

void reloj(){
  minutos++;
  if(minutos==60){
    minutos=0;
    hora++;
    }
    if(hora==24){
      hora=0;
      }
  Serial.print(hora);
  Serial.print(" : ");
  Serial.println(minutos);
  
  
  }

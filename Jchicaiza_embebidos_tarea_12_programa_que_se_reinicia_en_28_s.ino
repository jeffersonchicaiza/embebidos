#include <MsTimer2.h>
#include<avr/wdt.h>

int i=0;

void setup() {
  Serial.begin(9600);
  
  MsTimer2::set(1000,contador);
  MsTimer2::start();
  
  wdt_disable();
  
  Serial.println("Inicio");  
}

void loop() {

}

void contador(){
i++;
Serial.print("Segundos: ");
Serial.println(i);
if(i==28){
MsTimer2::stop();
wdt_enable(WDTO_30MS);
    }
    else{
wdt_disable();
      }
}

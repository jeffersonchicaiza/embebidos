/*    Universidad Tecnica del Norte
 *Chicaiza jefferson                          
*/

#include <LiquidCrystal.h>
String datoo;
float dato;
LiquidCrystal lcd(13,12,11,10,9,8);
int on=0;
int oon=0;

void setup() {
   lcd.begin(16,2);
   Serial.begin(9600);
Serial.println("Con los Botones seleccione la entrada y salida de cambio");
Serial.println("Ingrese el valor del cambio");

  attachInterrupt(0, monedaA, LOW); 
  attachInterrupt(1, monedaB, LOW);
}


void loop() {
  if(Serial.available()>0){
    datoo=Serial.readString();
    dato=datoo.toFloat();  
    }

    
//Euro A........................................
   if(on==1 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
   if(on==1 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*1.13);
    }
   if(on==1 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*4087.34);
    }
    if(on==1 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*3.92);
    }
    if(on==1 and oon==5){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*79.96);
    }
//DOLAR A.......................................
   if(on==2 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.89);
    }
   if(on==2 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
   if(on==2 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*3623);
    }
    if(on==2 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*3.47);
    }
    if(on==2 and oon==5){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*70.88);
    }
    
//PESO COLOMBIANO A.......................................
   if(on==3 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.00024);
    }
   if(on==3 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.00027);
    }
   if(on==3 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
    if(on==3 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.00096);
    }
    if(on==3 and oon==5){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.019);
    }
    
//SOL PERUANO A.......................................
   if(on==4 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.25);
    }
   if(on==4 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.28);
    }
   if(on==4 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*1033.57);
    }
    if(on==4 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }
    if(on==4 and oon==5){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*20.23);
    }
    
//PESO ARGENTINO A.......................................
   if(on==5 and oon==1){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.014);
    }
   if(on==5 and oon==2){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.014);
    }
   if(on==5 and oon==3){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*51.11);
    }
    if(on==5 and oon==4){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato*0.049);
    }
    if(on==5 and oon==5){
   limpiar1();
   lcd.setCursor(8,0);
   lcd.print(dato);
   limpiar2();
   lcd.setCursor(8,1);
   lcd.print(dato);
    }

delay(200);

}

void monedaA(){
   on++;
  switch (on){
    case 1:
    lcd.setCursor(4,0);
    lcd.print("    ");
    lcd.setCursor(0,0);
    lcd.print("EURO");
    break;
    
    case 2:
    lcd.setCursor(0,0);
    lcd.print("       ");
    lcd.setCursor(0,0);
    lcd.print("DOLAR");
    break;

    case 3:
    lcd.setCursor(0,0);
    lcd.print("        ");
    lcd.setCursor(0,0);
    lcd.print("PES COL");
    break;

    case 4:
    lcd.setCursor(0,0);
    lcd.print("       ");
    lcd.setCursor(0,0);
    lcd.print("SOL PER");
    break;

    case 5:
    lcd.setCursor(0,0);
    lcd.print("       ");
    lcd.setCursor(0,0);
    lcd.print("PES ARG");
    break;
    
    default:
    on=0;
    }
}

void monedaB(){   
     oon++;
  switch (oon){
    case 1:
    lcd.setCursor(4,1);
    lcd.print("    ");
    lcd.setCursor(0,1);
    lcd.print("EURO");
    break;

    case 2:
    lcd.setCursor(0,1);
    lcd.print("       ");
    lcd.setCursor(0,1);
    lcd.print("DOLAR");
    break;

    case 3:
    lcd.setCursor(0,1);
    lcd.print("       ");
    lcd.setCursor(0,1);
    lcd.print("PES COL");
    break;

    case 4:
    lcd.setCursor(0,1);
    lcd.print("      ");
    lcd.setCursor(0,1);
    lcd.print("SOL PER");
    break;

    case 5:
    lcd.setCursor(0,1);
    lcd.print("      ");
    lcd.setCursor(0,1);
    lcd.print("PES ARG");
    break;
    default:
    oon=0;
    }
}

void limpiar1(){
  lcd.setCursor(8,0);
   lcd.print("                ");
}
void limpiar2(){
  lcd.setCursor(8,1);
   lcd.print("                ");
  }

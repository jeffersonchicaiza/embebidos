// Deber sumador por serial
// chicaiza jefferson

String datos;
int numero1;
int numero2;
String num1;
String num2;
int suma;
int resta;

void setup() {
  Serial.begin(9600);
  Serial.println(" ingrese dos numeros");
  Serial.println(" ejemplo 20,10");
  attachInterrupt(0,sumar,FALLING);// habilitar interrupciones del pin de interupciones, FALLING CAMBIA DE ESTADO 
  attachInterrupt(1,restar,FALLING); // habiltar interrrupcion  restar 

}

void loop() {
  if(Serial.available()>0){ //verifica si hay datos en consola
    datos="";
    datos=Serial.readString();// se guarda el lo que se ingresa en terminal en la variable dato
    Serial.println(" ");
    Serial.println(datos);
    

    num1=datos.substring(0,datos.indexOf(','));// guarda el dato antes de la coma
    num2=datos.substring( datos.indexOf(',')+1,datos.length());// guarda el dato despues de la coma 
    Serial.println(num1);
    Serial.println(num2);

    numero1=num1.toInt();
    numero2=num2.toInt();
    
    }

}

void sumar(){
  suma=numero1+numero2;
    Serial.print("la suma es :");
    Serial.println(suma);
  }

  void restar(){
    resta=numero1-numero2;
    Serial.print("la resta es:");
    Serial.println(resta);
    }

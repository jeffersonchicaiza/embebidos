
#include <Password.h> //libreria Password
#include <Keypad.h> //libreria Keypad

Password password = Password( "1234" ); //Definimos nuestro Password

int ledrojo = 11;
int ledverde = 12;

const byte  filas = 4; // Cuatro Filas
const byte  columnas = 4; // Cuatro columnas

// Definimos el Keymap
char keys[ filas][ columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte filaPins[ filas] = { 9,8,7,6 };// Conectar los keypads fila1, fila2, fila3 y fila4 a esos Pines de Arduino.
byte columaPins[ columnas] = { 5,4,3,2, };// Conectar los keypads columa1, columa2, columa3 y columa4 a esos Pines de Arduino.


// Creamos el Keypad
Keypad keypad = Keypad( makeKeymap(keys), filaPins, columaPins,  filas,  columnas );

void setup(){

  Serial.begin(9600);
  keypad.addEventListener(keypadEvent); //Adicionamos un Evento listener para este keypad
  
  pinMode(ledrojo, OUTPUT);  
  pinMode(ledverde, OUTPUT);
  
  digitalWrite(ledrojo, LOW);
  digitalWrite(ledverde, LOW);
  
}

void loop(){
  keypad.getKey();
}

//Tenemos cuidado de algunos eventos especiales
void keypadEvent(KeypadEvent eKey){
  switch (keypad.getState()){
    case PRESSED:
	Serial.print("Pressed: ");
	Serial.println(eKey);
	switch (eKey){
	  case '*': checkPassword(); break;
	  case '#': password.reset(); break;
	  default: password.append(eKey);
     }
  }
}

void checkPassword(){
  if (password.evaluate()){
    Serial.println("Success"); //Adicionamos nuestro Codigo a ejecutar si esto SI trabaja
    digitalWrite(ledrojo, LOW);
    digitalWrite(ledverde, HIGH);
    delay(1500);
    digitalWrite(ledrojo, LOW);
    digitalWrite(ledverde, LOW);
    
    
  }else{
    Serial.println("Wrong"); //Adicionamos nuestro Codigo a ejecutar si esto NO trabaja
    digitalWrite(ledrojo, HIGH);
    digitalWrite(ledverde, LOW);
  }
}



#include <LiquidCrystal.h> // Incluye la Libreria LiquidCrystal

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Crea un Objeto LC. Parametros: (rs, enable, d4, d5, d6, d7)

void setup(){
  lcd.begin(16,2); // Inicializa la interface para el LCD screen, and determina sus dimensiones (ancho y alto) del display            		
  lcd.clear();   // Limpia la pantalla               		
  lcd.setCursor(1,0); // setea el cursor a la columna 1, fila 0
  lcd.print("ARDUINO");   // ingresamos nuestro texto
  lcd.setCursor(1,1); // setea el cursor a la columna 1, fila 1
  lcd.print(".");  //ingresamos nuestro texto
}

void loop()
{
  lcd.setCursor(16,1); // setea el cursor fuera del conteo del display
  lcd.autoscroll();    // Setea el display para scroll automatico
  lcd.print(" ");      // imprime un character en blanco
  delay(700);         // setea el tiempo del desplazamiento del caracter
 
} 

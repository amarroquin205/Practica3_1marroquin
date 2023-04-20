/*
FUNDACION KINAL
CENTRO: EDUCATIVO TECNICO LABORAL KINAL
PERITO EN ELECTRONICA
QUINTO PERITO
SECCION: A
CURSO: TALLER DE ELECTRONICA DIGITAL Y REPARACION DE COMPUTADORAS
ALUMNOS: Alvaro Josue Antonio Marroquin Corado
CARNETS: 2022375
proyecto: TECLADO MATRICIAL
*/
#include <Keypad.h> 

#define filas 4   
#define columnas 4 
#define F1_teclado 9  //pin2 conectado a la fila 1
#define F2_teclado 8  //pin3 conectado a la fila 2
#define F3_teclado 7  //pin4 conectado a la fila 3
#define F4_teclado 6  //pin5 conectado a la fila 4
#define C1_teclado 5  //pin6 conectado a la columna 1
#define C2_teclado 4  //pin7 conectado a la columna 2
#define C3_teclado 3  //pin8 conectado a la columna 3
#define C4_teclado 2  //pin9 conectado a la columna 4

 #define A 10
 #define B A0
 #define C A1
 #define D A2
 #define E A3
 #define F A4
 #define G A5


char keys[filas][columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pines_filas[filas] = {F1_teclado,F2_teclado,F3_teclado,F4_teclado};
byte pines_columnas[columnas] = {C1_teclado,C2_teclado,C3_teclado,C4_teclado};


Keypad MarrKeypad = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas,columnas);

void setup() {
  
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}
void loop(){
   char tecla = MarrKeypad.getKey();  
  switch(tecla)
  {
   
   break;
   case('0'):
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('1'):
   digitalWrite(A, LOW);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   digitalWrite(G, LOW);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('2'):
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, LOW);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, LOW);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('3'):
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('A'):
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, LOW);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('4'):
   digitalWrite(A, LOW);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('5'):
   digitalWrite(A, HIGH);
   digitalWrite(B, LOW);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, LOW);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('6'):
   digitalWrite(A, HIGH);
   digitalWrite(B, LOW);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('B'):
   digitalWrite(A, LOW);
   digitalWrite(B, LOW);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('7'):
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, LOW);
   digitalWrite(E, LOW);
   digitalWrite(F, LOW);
   digitalWrite(G, LOW);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('8'):
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('9'):
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, LOW);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('C'):
   digitalWrite(A, HIGH);
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('D'):
   digitalWrite(A, LOW);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, LOW);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('#'):
   digitalWrite(A, HIGH);
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;
   case('*'):
   digitalWrite(A, HIGH);
   digitalWrite(B, LOW);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, HIGH);
   delay(1000);
   digitalWrite(A, HIGH);
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   break;

   

  }
}

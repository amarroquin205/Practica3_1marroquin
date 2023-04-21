/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: menu.
   Nombre: Alvaro Josue Antonio Marroquin Corado
   Encardo: Profe. Alejandro Lopez Navas
   Fecha: 15 de Abril
*/

#define LEER(pin) digitalRead(pin)
#define entrada(pin) pinMode(pin, INPUT)
#define salida(pin)  pinMode(pin, OUTPUT)
#define b1  2
#define b2  3
int a=0;
  struct producto {
    char Nombre [20];
    int Stock;
    int Precio;
    }

 producto1 ={"chikis",12,2},
 producto2 ={"chokis",22,5},
 producto3 ={"lays",7,4},
 producto4 ={"pepesi",15,6};

void setup() {
    entrada(b1);
    entrada(b2);
    

}

void loop() {
  Serial.begin(9600);
  bool estado_boton1 = LEER(b1);
  bool estado_boton2 = LEER(b2);
   
if((estado_boton1 == HIGH) && (estado_boton2 == HIGH))
  {
    delay(200);
    a++ ;
    if(a == 1){
          Serial.println("Menu");
      delay(200);
          Serial.println("seleccionar chokis");
      delay(200);
          Serial.println("seleccionar chikis");
      delay(200);
          Serial.println("seleccionar lays");
      delay(200);
          Serial.println("seleccionar pepesi");
          a++;
          delay(100);
    }
 }
  if((estado_boton1 == HIGH) && (estado_boton2 == LOW))
  {
    delay(200);
    a++ ;
    if(a == 1){
          Serial.println("Nombre        Stock       Precio");
          Serial.print(producto1.Nombre);
          Serial.print("            ");
          Serial.print(producto1.Stock);
          Serial.print("            ");
          Serial.println(producto1.Precio);
          a++;
          delay(50);
    }
    if(a == 3){
          Serial.print(producto2.Nombre);
          Serial.print("            ");
          Serial.print(producto2.Stock);
          Serial.print("            ");
          Serial.println(producto2.Precio);
          a++;
          delay(50);
    }
    if(a == 5){
          Serial.print(producto3.Nombre);
          Serial.print("            ");
          Serial.print(producto3.Stock);
          Serial.print("            ");
          Serial.println(producto3.Precio);
          a++;
          delay(50);
        }  
        if(a == 7){
          Serial.print(producto4.Nombre);
          Serial.print("            ");
          Serial.println(producto4.Stock);
          Serial.print("            ");
          Serial.println(producto4.Precio);
          a++;
          delay(50);
        }  
     }
        if((estado_boton2 == HIGH) && (estado_boton1 == LOW))
        {
          delay(200);
          a--;
          if(a == 1){
          Serial.print(producto4.Nombre);
          Serial.print("            ");
          Serial.print(producto4.Stock);
          Serial.print("            ");
          Serial.println(producto4.Precio);
          delay(50);
          a==8;
          }
           if(a == 3){
          Serial.print(producto1.Nombre);
          Serial.print("            ");
          Serial.print(producto1.Stock);
          Serial.print("            ");
          Serial.println(producto1.Precio);
          delay(50);
          a--;
          }
           if(a == 5){
          Serial.print(producto2.Nombre);
          Serial.print("            ");
          Serial.print(producto2.Stock);
          Serial.print("            ");
          Serial.println(producto2.Precio);
          delay(50);
          a--;
          }
           if(a == 7){
          Serial.print(producto3.Nombre);
          Serial.print("            ");
          Serial.print(producto3.Stock);
          Serial.print("            ");
          Serial.println(producto3.Precio);
          delay(50);
          a--;
          }
          if(a<0){
            a = 7;
                     }
            }
    }
         
     

#define p1    2
#define p2    3
#define red   4
#define green 5
#define blue  6

void setup() {
 pinMode(p1,INPUT);
 pinMode(p2,OUTPUT);
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(blue,OUTPUT);

}

void loop() {
if(((digitalRead(p1))== HIGH) && ((digitalRead(p2))== HIGH))
{
digitalWrite(red,HIGH); //1
delay(500);
digitalWrite(red,LOW);
delay(20);

digitalWrite(green,HIGH); //2
delay(500);
digitalWrite(green,LOW);
delay(20);

digitalWrite(blue,HIGH); //3
delay(500);
digitalWrite(blue,LOW);
delay(20);
}
if(((digitalRead(p1))== HIGH) && ((digitalRead(p2))== LOW))
{
  delay(100);
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue, LOW);
 }
if(((digitalRead(p1))== LOW) && ((digitalRead(p2))== HIGH))
{
  delay(100);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
}
if(((digitalRead(p1))== HIGH) && ((digitalRead(p2))== HIGH))
{
  delay(100);
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
 
  }
}

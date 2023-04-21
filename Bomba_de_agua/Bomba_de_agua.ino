#define rele    2
#define sensor1 4
#define L1      5

void setup() {
  // put your setup code here, to run once:
pinMode(rele, OUTPUT);
pinMode(L1, OUTPUT);
pinMode(sensor1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool estado_led_0 = digitalRead(sensor1);
  if(estado_led_0 == HIGH)
  {
    digitalWrite(rele, HIGH);
    digitalWrite(L1, LOW);
  }
  if(estado_led_0 == LOW)
  {
     digitalWrite(rele, LOW);
    digitalWrite(L1, HIGH);
}}

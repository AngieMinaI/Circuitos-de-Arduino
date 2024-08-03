const int pulsador_rojo=7;
const int pulsador_verde=8;
const int led_rojo=3;
const int led_verde=4;
void setup()
{
  pinMode(led_rojo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(pulsador_rojo,INPUT_PULLUP); 
  pinMode(pulsador_verde,INPUT_PULLUP);
}

void loop()
{
  int lectura_rojo = digitalRead(pulsador_rojo);
  int lectura_verde = digitalRead(pulsador_verde);
  
  if (lectura_rojo==LOW)
  {
    digitalWrite(led_rojo,HIGH);
    digitalWrite(led_verde, LOW);
    
  }
  
  if (lectura_verde==LOW)
  {
    digitalWrite(led_rojo,LOW);
    digitalWrite(led_verde, HIGH);
  
  }
}
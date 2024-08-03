const int led_rojo=2;
const int led_verde=3;
const int sensor=4;
const int validacion=8;
const int clave1=5;
const int clave2=6;
const int clave3=7;
const int parlante=9;
bool alarma=0;

void setup()
{
  pinMode(led_rojo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(sensor, INPUT_PULLUP);
  pinMode(validacion, INPUT_PULLUP);
  pinMode(clave1, INPUT);
  pinMode(clave2, INPUT);
  pinMode(clave3, INPUT);
}

void loop()
{
 if (digitalRead(sensor)==LOW)
 {
 alarma=1;
 }
  if(alarma==1)
  {
  digitalWrite(led_verde, LOW);
    digitalWrite(led_rojo,HIGH);
    tone(parlante,400,250);
    delay (500);
  }
  if (alarma==0)
  {
  digitalWrite(led_verde,HIGH);
    digitalWrite(led_rojo, LOW);
  }
  
  
  if (digitalRead(validacion)==LOW)
  {
  if((digitalRead(clave1)==HIGH)and
     (digitalRead(clave2)==LOW)and
      (digitalRead(clave3)==HIGH))
    
     {
     alarma=0;
     }
     else 
     {
     alarma=1;
     }
  }
     }
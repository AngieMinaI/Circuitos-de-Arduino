const int pulsador_resta=11;
const int pulsador_suma=12;
const int led1=2;
const int led2=3;
const int led3=4;
const int led4=5;
const int led5=6;
const int led6=7;

int contador=0;

  
void setup()
{
  pinMode(pulsador_resta, INPUT_PULLUP);
  pinMode(pulsador_suma, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT); 
}

void loop()
{
  int lectura_resta = digitalRead(pulsador_resta);
  int lectura_suma = digitalRead(pulsador_suma);
  
  if (lectura_resta==LOW)
  {
    delay(200);
    
    if (contador==0)
    {
    contador=0;
    }
    
    else
    {
    contador=contador-1;
    }
  }
  
  if (lectura_suma==LOW)
  {
  delay(200);
    if (contador==6)
    {
    contador=6;
    }
    else
    {
    contador=contador+1;
    }
  }
 if (contador==0)
 {
  digitalWrite(led1,LOW);
   digitalWrite(led2,LOW); 
   digitalWrite(led3,LOW); 
   digitalWrite(led4,LOW); 
   digitalWrite(led5,LOW); 
   digitalWrite(led6,LOW); 
 }
  if (contador==1)
 {
  digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW); 
   digitalWrite(led3,LOW); 
   digitalWrite(led4,LOW); 
   digitalWrite(led5,LOW); 
   digitalWrite(led6,LOW); 
  }
    if (contador==2)
 {
  digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH); 
   digitalWrite(led3,LOW); 
   digitalWrite(led4,LOW); 
   digitalWrite(led5,LOW); 
   digitalWrite(led6,LOW); 
    }
   if (contador==3)
 {
  digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH); 
   digitalWrite(led3,HIGH); 
   digitalWrite(led4,LOW); 
   digitalWrite(led5,LOW); 
   digitalWrite(led6,LOW); 
  }
  if (contador==4)
 {
  digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH); 
   digitalWrite(led3,HIGH); 
   digitalWrite(led4,HIGH); 
   digitalWrite(led5,LOW); 
   digitalWrite(led6,LOW);
   }
  if (contador==5)
 {
  digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH); 
   digitalWrite(led3,HIGH); 
   digitalWrite(led4,HIGH); 
   digitalWrite(led5,HIGH); 
   digitalWrite(led6,LOW); 
  }
  
 if (contador==6)
 {
  digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH); 
   digitalWrite(led3,HIGH); 
   digitalWrite(led4,HIGH); 
   digitalWrite(led5,HIGH); 
   digitalWrite(led6,HIGH); 
   }

}
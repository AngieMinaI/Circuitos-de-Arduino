int rojo = 11;
int verde = 6;
int azul = 10;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  //rojo
  analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 0);
  delay(1000); 
  //verde
  analogWrite(rojo, 0);
  analogWrite(verde, 255);
  analogWrite(azul, 0);
  delay(1000); 
  //azul
  analogWrite(rojo, 0);
  analogWrite(verde, 0);
  analogWrite(azul, 255);
  delay(1000); 
  //apagado
  analogWrite(rojo, 0);
  analogWrite(verde, 0);
  analogWrite(azul, 0);
  delay(1000); 
}
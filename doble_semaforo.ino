const int rojo=5;
const int amarillo=6;
const int verde=7;
const int rojo2=A2;
const int amarillo2=A1;
const int verde2=A0;

void setup()
{
  // semaforo1
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  // semaforo 2
  pinMode(rojo2, OUTPUT);
  pinMode(amarillo2, OUTPUT);
  pinMode(verde, OUTPUT);
  
}

void loop()
{
  //SEMAFORO 1
  digitalWrite(verde, HIGH);
  digitalWrite(amarillo, LOW); 
  digitalWrite(rojo, LOW);
  
  // semaforo2
  digitalWrite(verde2, LOW);
  digitalWrite(amarillo2, LOW);
  digitalWrite(rojo2, HIGH);
  delay(5000);
  
  //SEMAFORO 1
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, HIGH); 
  digitalWrite(rojo, LOW);
  
  // semaforo2
  digitalWrite(verde2, LOW);
  digitalWrite(amarillo2, LOW);
  digitalWrite(rojo2, HIGH);
  delay(5000);
  
  //SEMAFORO 1
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, LOW); 
  digitalWrite(rojo, HIGH);
  
  // semaforo2
  digitalWrite(verde2, HIGH);
  digitalWrite(amarillo2, LOW);
  digitalWrite(rojo2, LOW);
  delay(5000);
  //SEMAFORO 1
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, LOW); 
  digitalWrite(rojo, HIGH);
  
  // semaforo2
  digitalWrite(verde2, LOW);
  digitalWrite(amarillo2, HIGH);
  digitalWrite(rojo2, LOW);
  delay(5000);


}
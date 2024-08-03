const int led=13;


void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int analogico=analogRead(A0);
  Serial.println(analogico);
  
  if(analogico>500)
  {
    digitalWrite(led,LOW);
  }
  else
  {
  digitalWrite(led,HIGH);
  }
}
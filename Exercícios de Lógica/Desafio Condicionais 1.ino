// C++ code
/*
Controlar dois LEDs com comandos digitados no Monitor Serial, sem uso de botões.
Enviar "1" para acender o LED1 (verde).
Enviar "2" para acender o LED2 (vermelho).
Enviar "0" para apagar ambos.
*/

int led1 = 6; // LED verde
int led2 = 5; // LED vermelho
int acendeLed = 0; // Armazena o valor digitado

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha um LED: 1 para acender Verde, 2 para acender Vermelho, 3 para apagar Verde, 4 para apagar Vermelho, 5 para acender ambos e 0 para apagar ambos:");
  while (!Serial.available());
  acendeLed = Serial.parseInt();

   if (acendeLed == 1)
  {
    Serial.println();
    digitalWrite(led1, HIGH);
    delay(5000);
  }
  if (acendeLed == 2)
  {
    Serial.println();
    digitalWrite(led2, HIGH);
    delay(5000);
  }   
  if (acendeLed == 3)
  {
    Serial.println();
    digitalWrite(led1, LOW);
    delay(5000);
  }  
  if (acendeLed == 4)
  {
    Serial.println();
    digitalWrite(led2, LOW);
    delay(5000);
  }   
   if (acendeLed == 5)
  {
    Serial.println();
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(5000);
  }   
  if (acendeLed == 0)
  {
    Serial.println();
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
  if (acendeLed != 0 && acendeLed != 1 && acendeLed != 2 && acendeLed != 3 && acendeLed != 4 && acendeLed != 5) 
  {
    Serial.println();
  	Serial.println("LED nao encontrado");
  }
    Serial.println();
    Serial.println("--------------------------------------------------------------------------------------------------------------------------------------------------------");
    Serial.println();
    delay(3000);
 
}
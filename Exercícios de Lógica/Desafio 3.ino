// C++ code
// Exibir os números pares de 0 a 99.
int contador;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 0; contador <= 99; contador += 2)
  {
    Serial.println(String(contador));
  }
  delay(3000);
}
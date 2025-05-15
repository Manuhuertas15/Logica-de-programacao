// C++ code
// Exibir os números ímpares de 0 a 99.
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int contador = 1; contador <= 99; contador += 2)
  {
    Serial.println(String(contador));
  }
  delay(3000);
}
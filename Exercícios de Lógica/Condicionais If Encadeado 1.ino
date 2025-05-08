// Variáveis 
int idade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Para saber sua categoria, digite sua idade:");

  // Aguarda até que o usuário digite algo
  while (!Serial.available());

  delay(100); // Pequeno atraso para garantir a leitura correta

  idade = Serial.parseInt();

  // Classificação por idade
  if (idade <= 10)
  {
    Serial.println("Categoria Infantil");
  }
  else if (idade < 18)
  {
    Serial.println("Categoria Juvenil");
  }
  else if (idade < 35)
  {
    Serial.println("Categoria Adulta");
  }
  else
  {
    Serial.println("Categoria Sênior");
  }

  // Aguarda um pouco antes de repetir
  delay(2000);
}


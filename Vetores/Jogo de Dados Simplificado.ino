// C++ code
//
void desenhaCabecalho()
{
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println();
}
/*void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for (int i = 0; i < qtdPontos; i++)
  {
    Serial.println(".");
    delay(500);
  }
} */

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
  desenhaCabecalho();

  delay(1000);

  Serial.println("Digite um palpite de 1 a 6:");
  while(!Serial.available());
  int palpite = Serial.parseInt();

  int numeroSorteado = random(1, 7);

  Serial.println();
 
  for (int i = 0; i < 5; i++)
  {
    Serial.println(".");
    delay(500);
  }
  
  Serial.println();
  
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero sorteado: " + String(numeroSorteado));

  if(numeroSorteado != palpite)
  {
    Serial.println("Que pena, tente outra vez!");
  }
  Serial.println("Reiniciando o programa...");
  Serial.println();  
  Serial.println();
  delay(1500);
}
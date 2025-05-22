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
  Serial.println();
  desenhaCabecalho();
  delay(1000);

  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();
  
  int vetPalpites [qtdRodadas];
  int vetResultados [qtdRodadas];

  for(int r = 0; r < qtdRodadas; r++)
  {
    Serial.println("Digite um palpite de 1 a 6:");
    while(!Serial.available());
    int palpite = Serial.parseInt();

    int numeroSorteado = random(1, 7);
    
    vetPalpites[r] = palpite;
    vetResultados[r] = numeroSorteado;
    
    Serial.print("Jogando o dado");
    
    for (int i = 0; i < 5; i++)
    {
      Serial.print(".");
      delay(500);
    }
    
    Serial.println();
    Serial.println();

    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero sorteado: " + String(numeroSorteado));

    if(numeroSorteado != palpite)
    {
      Serial.println("Que pena, tente outra vez!");
      Serial.println();
      delay(500);
    }

  }
  
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();
  for(int r = 0; r < qtdRodadas; r++)
  {
    Serial.println("Rodada " + String(r + 1) + ":");
    Serial.println("Palpite: " + String(vetPalpites[r]));
    Serial.println("Resultado: " + String(vetResultados[r] == vetPalpites[r] ? "ACERTOU!!! :)" : "ERROU!!! :("));
  }
  
  Serial.println();
  Serial.println("FIM DO JOGO!!! Reiniciando o programa...");
  Serial.println();  
  
 
  delay(2000);
}
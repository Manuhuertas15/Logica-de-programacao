//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Variáveis 
int anoNascimento = 0;
int anoAtual = 0;
int idadeAtual = 0;
float idadeSemana = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Cabeçalho
  Serial.println ("|------------------------------|");
  Serial.println ("|                              |");
  Serial.println ("|          LOPAL Ex 2          |");
  Serial.println ("|                              |");
  Serial.println ("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //Entrada 
  Serial.println("Digite seu ano de nascimento"); // pergunta o ano de nascimento do usuário
  while (!Serial.available()); // espera o usuário digitar/dar um <Enter>
  anoNascimento = Serial.parseInt(); // resposta do usuário/converte o texto que o usuário digitar em inteiro

  Serial.println("Digite o ano atual"); // pergunta o ano atual do usuário
  while (!Serial.available()); // espera o usuário digitar/dar um <Enter>
  anoAtual = Serial.parseInt(); // resposta do usuário/converte o texto que o usuário digitar em inteiro

  //Processamento
  idadeAtual = anoAtual - anoNascimento;
  idadeSemana = idadeAtual * 365.0 / 7.0; // usar ponto flutuante para manter precisão

  //Saída
  Serial.println("Sua idade em anos: " + String(idadeAtual));
  Serial.println("Sua idade em semanas: " + String(idadeSemana, 3)); // imprime com 2 casas decimais
  delay(5000); // aguarda 5 segundos antes de rodar o loop novamente
}
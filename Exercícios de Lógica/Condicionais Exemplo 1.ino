/*

Faça um programa que pergunte ao usuário sua idade e se ele tem ingresso.

Após validação, exiba a mensagem se ele pode entrar na festa ou não.

OBS: Condição para entrar na festa é ter o ingresso e ser maior de idade

---
Logo em seguida altere o programa para acender um led caso o usuário possa entrar na festa,
caso contrário acenda um led vermelho

*/


// C++ code
// Variáveis
int idade = 0;
String nome = "";
String ingresso = "";
bool entraNaFesta = idade >= 18 && ingresso == "Sim";
//bool maiorDeIdade = idade >= 18; 
// Valor false = 0
// Val/or true = 1

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println ("Digite seu nome:");//pergunta o nome do usuário
  while (! Serial.available () );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString ();//resposta do usuário / ler um texto da serial
  nome.trim ();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite sua idade:");//pergunta a altura em metros  do usuário
  while (! Serial.available () );//espera o usuário digitar/dar um <Enter>
  idade = Serial.parseInt ();//resposta do usuário
  
  Serial.println ("Tem ingresso?");//pergunta o nome do usuário
  while (! Serial.available () );//espera o usuário digitar/dar um <Enter>
  ingresso = Serial.readString ();//resposta do usuário / ler um texto da serial
  
  
  // Avalia se pode entrar na festa
  entraNaFesta = idade >= 18 && ingresso == "Sim";
  
  Serial.println();
  Serial.println (" _____________");
  Serial.println ("|             |");
  Serial.println ("|  Relatorio  |");
  Serial.println ("|_____________|");
  Serial.println ();
 
  Serial.println("Nome: " + String(nome));
  Serial.println("Idade: " + String(idade));
  Serial.println("Ingresso: " + String(ingresso));
//Serial.println("Entra na festa? " + String(entraNaFesta) );

  if (entraNaFesta)  // se for verdadeiro (true)
  {
   Serial.println("Parabens... Esperamos que voce curta nossa festa!");
   Serial.println("Se prepare, pois ela acontecerah nesta sexta!");
   Serial.println("Estamos ansiosos para te receber! :)");
  }
  else
  {
   Serial.println("Que pena, nao foi desta vez!");
   Serial.println("Infelizmente voce nao pode entrar em nossa festa :(");
  }
   Serial.println();
  delay(10000); // Espera 10 segundos antes de repetir
}
// C++ code
// Variáveis
//bool maiorDeIdade = idade >= 18; 
// Valor false = 0
// Val/or true = 1

int idade = 0;
String nome = "";
String ingresso = "";
bool entraNaFesta = idade >= 18 && ingresso == "Sim";
int ledVermelho = 5;
int ledVerde = 6;

void setup()
{
  pinMode(ledVermelho, OUTPUT);//Configura led vermelho como saída
  pinMode(ledVerde, OUTPUT);//Configura led verde como saída
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

  if (entraNaFesta)  // se for verdadeiro (true)
  {
   digitalWrite(ledVerde, HIGH);
   digitalWrite(ledVerde, HIGH);
   delay(300);
   digitalWrite(ledVerde, LOW);
   delay(300);
   digitalWrite(ledVerde, HIGH);
   delay(300);
   digitalWrite(ledVerde, LOW);
   delay(300);
   digitalWrite(ledVerde, HIGH);
   delay(300);
   digitalWrite(ledVermelho, LOW);
   Serial.println("Parabens... Esperamos que voce curta nossa festa!");
   Serial.println("Se prepare, pois ela acontecerah nesta sexta!");
   Serial.println("Estamos ansiosos para te receber! :)");
  }
  else
  {
   digitalWrite(ledVermelho, HIGH);
   delay(300);
   digitalWrite(ledVermelho, LOW);
   delay(300);
   digitalWrite(ledVermelho, HIGH);
   delay(300);
   digitalWrite(ledVermelho, LOW);
   delay(300);
   digitalWrite(ledVermelho, HIGH);
   delay(300);
   digitalWrite(ledVerde, LOW);
   Serial.println("Que pena, nao foi desta vez!");
   Serial.println("Infelizmente voce nao pode entrar em nossa festa :(");
  }
  delay(1000);
   digitalWrite(ledVermelho, LOW);
   digitalWrite(ledVerde, LOW);
   Serial.println();
  delay(1000); // Espera 10 segundos antes de repetir
}
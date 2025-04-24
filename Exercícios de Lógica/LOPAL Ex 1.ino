//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//variáveis
int idade = 0;//inicia a idade
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Cabeçalho
  Serial.println ("|------------------------------|");
  Serial.println ("|                              |");
  Serial.println ("|          LOPAL Ex 1          |");
  Serial.println ("|                              |");
  Serial.println ("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //entrada
  Serial.println("Digite sua idade");//pergunta a idade do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  idade = Serial.parseLong();//resposta do usuário
 
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;
  
  //saída
  Serial.println("Sua idade em anos: " + String (idade) );
  Serial.println("Sua idade em meses: " + String (idadeMeses) );
  Serial.println("Sua idade em dias: " + String (idadeDias) );
  Serial.println("Sua idade em horas: " + String (idadeHoras) );
  Serial.println("Sua idade em minutos: " + String (idadeMinutos) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}
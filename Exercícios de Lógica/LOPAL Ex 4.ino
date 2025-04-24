//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
// / (altura * altura).

//Variáveis
String nome = ""; 
float altura = 0; 
float peso = 0; 
float IMC = 0;
  
void setup ()
{
  Serial.begin (9600);
}

void loop ()
{
  //Cabeçalho
  Serial.println ("|------------------------------|");
  Serial.println ("|                              |");
  Serial.println ("|          LOPAL Ex 4          |");
  Serial.println ("|                              |");
  Serial.println ("|------------------------------|");
  Serial.println ();//pula uma linha
  Serial.println ();//pula uma linha
  
  //Entrada 
  Serial.println ("Digite seu nome");//pergunta o nome do usuário
  while (! Serial.available () );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString ();//resposta do usuário / ler um texto da serial
  nome.trim ();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite sua altura em metros");//pergunta a altura em metros  do usuário
  while (! Serial.available () );//espera o usuário digitar/dar um <Enter>
  altura = Serial.parseFloat ();//resposta do usuário
 
  
  Serial.println ("Digite seu peso em quilogramas");//pergunta o peso em quilogramas do usuário
  while (! Serial.available () );//espera o usuário digitar/dar um <Enter>
  peso = Serial.parseFloat ();//resposta do usuário
  
  //processamento
  IMC = peso / (altura * altura);
    
  //saída
  Serial.println (String (nome) + " o seu IMC eh: " + String (IMC, 2) );
  
   //Condicional para classificação do IMC
  if (IMC < 18.5) 
{
  Serial.println ("Classificacao: Abaixo do peso");
} else if (IMC >= 18.5 && IMC < 25) 
{
  Serial.println ("Classificacao: Peso normal");
} else if (IMC >= 25 && IMC < 30) 
{
  Serial.println ("Classificacao: Sobrepeso");
} else if (IMC >= 30 && IMC < 35) 
{
  Serial.println ("Classificacao: Obesidade grau I");
} else if (IMC >= 35 && IMC < 40) 
{
  Serial.println ("Classificacao: Obesidade grau II");
} else 
{
  Serial.println ("Classificacao: Obesidade grau III (morbida)");
}
  Serial.println ();
  delay (10000);//aguarda 5 segundos antes de rodar o loop novamente
}
//Faça um programa que receba o nome, cargo, e salário de um funcionário. Calcule o
//salário a ser acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variáveis
String nome = "";
String cargo = "";
float salarioAtual = 0;
float novoSalario = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  //Cabeçalho
  Serial.println ("|------------------------------|");
  Serial.println ("|                              |");
  Serial.println ("|          LOPAL Ex 7          |");
  Serial.println ("|                              |");
  Serial.println ("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //Entrada 
  Serial.println("Qual eh o nome do funcionario?");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário / ler um texto da serial
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Qual eh o cargo de " + nome);//pergunta o cargo do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargo = Serial.readString();//resposta do usuário / ler um texto da serial
  cargo.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Qual eh o salario de " + nome);//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salarioAtual = Serial.parseFloat();//resposta do usuário
  
  //processamento
  novoSalario = salarioAtual + (salarioAtual * 0.10);
  
  //saída
  Serial.println("Relatorio");
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println();
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Salario atual: " + String (salarioAtual) );
  Serial.println("Novo salario: " + String (novoSalario, 2) );
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println();
  
  Serial.println("Digite uma letra + <ENTER> para continuar...");//Faz o programa parar até apertar o <ENTER>
  while (! Serial.available () );
  
  Serial.println();
  Serial.println();
  
  Serial.read();//Limpa o cachê do \n - o <ENTER>
}
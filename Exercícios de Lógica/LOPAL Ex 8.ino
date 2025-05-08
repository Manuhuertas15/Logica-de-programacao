// C++ code
/*Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.*/
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
 
  //saída
  Serial.println("Relatorio");
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println();
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
   
  if (salarioAtual <= 1000)
  {
    novoSalario = salarioAtual + (salarioAtual * 0.10);
    Serial.println("Novo salario: R$" + String (novoSalario, 2) );
  }  
  else 
  {
    Serial.println("Salario atual: R$" + String (salarioAtual) );
  }
  Serial.println();
  Serial.println("--------------------------------");
  Serial.println();
    
  Serial.println();
  Serial.println();
  delay(5000);
}
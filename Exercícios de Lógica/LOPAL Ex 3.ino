//Faça um programa que receba um número e exiba o seu dobro.

//Variáveis
float numero = 0;
float dobroNumero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada 
  Serial.println("Digite um numero qualquer");//pergunta um número da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numero = Serial.parseFloat();//resposta do usuário
  
  //processamento
  dobroNumero = numero * 2;
  
  //saída
  Serial.println("O dobro do numero digitado eh: " + String (dobroNumero) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}

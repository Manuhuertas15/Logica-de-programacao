// C++ code
/*Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.*/
//Variáveis
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero qualquer");  
  while (! Serial.available());
  numero = Serial.parseInt();
  if(numero % 2 == 0)
  {
  Serial.println("O numero digitado eh par: " + String (numero));
  }
  else 
  {
  Serial.println("O numero digitado eh impar: " + String (numero));
  }
  Serial.println();
  delay(3000);
}
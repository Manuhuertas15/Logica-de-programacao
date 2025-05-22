// C++ code
/*Faça um programa que contenha um array tamanho 10. 
Solicite ao usuário que digite números pares, inteiros, 
e os guarde no vetor. Para isso utilize a estrutura de
repetição WHILE. Ao final, exiba todos os valores com 
a estrutura de repetição FOR.*/

int numerosPares[10];

void setup()
{
  Serial.begin(9600);

  int i = 0;
 

  while(i <= 9)
  {
    Serial.println("Digite o " + String(i + 1) + " numero, sendo par e inteiro: ");
    while(!Serial.available());
    int numerosDigitados = Serial.parseInt();
    numerosPares[i] = numerosDigitados;
    
    if (numeroDigitado % 2 == 0) 
    {
      numerosPares[i] = numeroDigitado;
      i++;
    } else 
    {
      Serial.println("O numero digitado nao e par. Tente novamente.");
    }
    i++;
  }
  for(int i = 0; i <= 9; i++)
  {
  Serial.println("O " + String(i + 1) + " numero digitado foi: " + String(numerosPares[i]));
  }
}

void loop()
{

}
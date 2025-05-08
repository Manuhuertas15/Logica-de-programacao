// C++ code
/*
Faça um programa que receba um código de origem de um produto e informe sua procedência conforme a lista abaixo:
    
    CÓDIGO DE ORIGEM			PROCEDÊNCIA 
    	1							Sul
        2							Norte
        3							Leste
        4							Oeste
        5 ou 6 						Nordeste
        7, 8 ou 9 					Sudeste
        10 até 20 					Centro-Oeste
        acima de 20 				Código ainda sem definição
*/

// Variáveis 
int codigoOrigem;               

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o codigo de origem do produto:");
  while (!Serial.available());
  codigoOrigem = Serial.parseInt();

  Serial.println();

  if (codigoOrigem == 1)
  {
    Serial.println("O produto eh do Sul");
  }
  else if (codigoOrigem == 2)
  {
    Serial.println("O produto eh do Norte");
  }
  else if (codigoOrigem == 3)
  {
    Serial.println("O produto eh do Leste");
  }
  else if (codigoOrigem == 4)
  {
    Serial.println("O produto eh do Oeste");
  }
  else if (codigoOrigem == 5 || codigoOrigem == 6)
  {
    Serial.println("O produto eh do Nordeste");
  }
  else if (codigoOrigem >= 7 && codigoOrigem <= 9)
  {
    Serial.println("O produto eh do Sudeste");
  }
  else if (codigoOrigem >= 10 && codigoOrigem <= 20)
  {
    Serial.println("O produto eh do Centro-Oeste");
  }
  else
  {
    Serial.println("O produto ainda não teve codigo definido");
  }

  delay(5000);
  Serial.println();
}

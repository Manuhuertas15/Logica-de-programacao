// C++ code
/*Solicite dois números e uma operação (soma, subtração, 
multiplicação ou divisão).
Realize a operação indicada.
Mostre o resultado.*/
//Variáveis

/*float numero1 = 0;
float numero2 = 0;*/

float numero3Global = 0;
float soma;
float subtracao;
float multiplicacao;
float divisao;
int escolhaDaOperacao;
int contador = 0;

float somar(float numero1, float numero2, float numero3 = 0)
{
  return (numero1 + numero2 + numero3);
}

float subtrair(float numero1, float numero2, float numero3 = 0)
{
  return (numero1 - numero2);
}

float multiplicar(float numero1, float numero2, float numero3 = 0)
{
  return (numero1 * numero2);
}

float dividir(float numero1, float numero2, float numero3 = 0)
{
  return (numero1 / numero2);
}

void setup()
{
  Serial.begin(9600);

  float numero1 = 0;
  float numero2 = 0;
  float numero3 = 0;
  
  do
  {
    Serial.println(" _____________________________________________");
    Serial.println("|                                             |");
    Serial.println("| Seja bem vindo(a) a nossa calculadora!!! :) |");
    Serial.println("|_____________________________________________|");
    Serial.println();
    Serial.println("             ___________________ ");
    Serial.println("            | 1 - Soma          |");
    Serial.println("            | 2 - Subtracao     |");
    Serial.println("            | 3 - Multiplicacao |");
    Serial.println("            | 4 - Divisao       |");
    Serial.println("            |___________________|");

    while (!Serial.available()) {}
    escolhaDaOperacao = Serial.parseInt();

    Serial.println("Digite o primeiro numero:");
    while (!Serial.available());
    numero1 = Serial.parseFloat();

    Serial.println("Digite o segundo numero:");
    while (!Serial.available());
    numero2 = Serial.parseFloat();

    float resultado = 0;

    switch (escolhaDaOperacao)
    {
      case 1:
        resultado = somar(numero1, numero2, numero3);
        Serial.println("Resultado: " + String(resultado));
        break;

      case 2:
        resultado = subtrair(numero1, numero2, numero3);
        Serial.println("Resultado: " + String(resultado));
        break;

      case 3:
        resultado = multiplicar(numero1, numero2, numero3);
        Serial.println("Resultado: " + String(resultado));
        break;

      case 4:
        resultado = dividir(numero1, numero2, numero3);
        if (numero2 != 0) {
          Serial.println("Resultado: " + String(resultado));
        }
        break;

      default:
        Serial.println("Opcao invalida.");
        break;
    }

    Serial.println();
    Serial.println("Deseja continuar? Digite [S] para sim ou [N] para nao");
    while (!Serial.available());
    String resposta = Serial.readString();
    resposta.trim();
    resposta.toUpperCase();

    if (resposta == "S")
    {
      contador++;
    }
    else
    {
      contador = 0;
      Serial.println("Ate breve! Obrigado por usar nossa calculadora!");
    }

  } while (contador != 0);
}

void loop()
{
  // Sem código
}
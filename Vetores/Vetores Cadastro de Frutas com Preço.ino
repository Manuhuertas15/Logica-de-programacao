// C++ code
//

String frutas [6];//Cria vetor vazio
String frutaDigitada = "";

float valores [6];
float valorDigitado = 0;

void setup()
{
  Serial.begin(9600);

  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();

  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  Serial.println();

  for(int f = 0; f <= 5; f++)
  {
    Serial.println("Digite o nome da " + String(f + 1) + " fruta: ");
    while(!Serial.available());
    String frutaDigitada = Serial.readString();

    frutas[f] = frutaDigitada;

    Serial.println("Digite o valor do(a) " + frutaDigitada + "?");
    while(!Serial.available());
    float valorDigitado = Serial.parseFloat();

    valores [f] = valorDigitado;
  }



  //Desafio; crie um for para exibir o nome das frutas digitadas pelo usuario
  /* for(int f = 0; f <= 5; f++)
  {
    Serial.println(String(f + 1) + " fruta: " + String(frutas[f]));
  }*/

  //Desafio; crie um for para exibir o valor das frutas digitadas pelo usuario
  
  Serial.println("Valores das frutas:");
  for (int f = 0; f <= 5; f++)
  {
    Serial.println(frutas[f] + ": R$ " + String(valores[f], 2));
  }

  // Soma total
  float somaTotal = 0;
  for (int f = 0; f <= 5 f++) 
  {
    somaTotal += valores[f];
  }

  Serial.println("=== TOTAL ===");
  Serial.println("Soma total dos valores: R$ " + String(somaTotal, 2));

  
 /* Serial.println("Digite o nome da primeira fruta");
  while(!Serial.available());
  String fruta = Serial.readString();
  
  frutas[0] = fruta;
  
  Serial.println("Digite o nome da segunda fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[1] = fruta;
  
  Serial.println("Digite o nome da terceira fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[2] = fruta;
  
  Serial.println("Digite o nome da quarta fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[3] = fruta;
  
  Serial.println("Digite o nome da quinta fruta");
  while(!Serial.available());
  fruta = Serial.readString();
  
  frutas[4] = fruta;*/
}

void loop()
{

}
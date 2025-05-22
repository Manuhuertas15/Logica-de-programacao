// C++ code
// Variáveis
String* convidados;
String* emailConvidados;
int* idadeConvidados;
int qtdCadastro;

void desenhaCabecalho()
{
  Serial.println("- - - - - - - - - - - - - - - - - - - - - - - - - -");
  Serial.println("|                 Seja bem vindo(a)                |");
  Serial.println("|              ***Churrascao do ZEH***             |");
  Serial.println("- - - - - - - - - - - - - - - - - - - - - - - - - -");
  Serial.println();
}  


void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
    desenhaCabecalho();
    
    Serial.println("Digite a quantidade de cadastros a serem feitos: ");
    while(!Serial.available());
    qtdCadastro = Serial.parseInt();
    
    // Alocação dinâmica dos arrays
    convidados = new String[qtdCadastro];
    emailConvidados = new String[qtdCadastro];
    idadeConvidados = new int[qtdCadastro];

    for (int i = 0; i < qtdCadastro; i++)
    {
      Serial.println("Informe o " + String(i + 1) + " nome para cadastro:");
      while (!Serial.available());
      convidados[i] = Serial.readString();

      Serial.println("Informe a " + String(i + 1) + " idade para cadastro:");
      while (!Serial.available());
      idadeConvidados[i] = Serial.parseInt();

      Serial.println("Informe o " + String(i + 1) + " email para cadastro:");
      while (!Serial.available());
      emailConvidados[i] = Serial.readString();
    }

    Serial.println("Informações de cadastro:");

    for (int i = 0; i < qtdCadastro; i++)
    {
      Serial.println("Nome: " + convidados[i]);
      Serial.println("Idade: " + String(idadeConvidados[i]));
      Serial.println("Email: " + emailConvidados[i]);
      Serial.println("Permissão para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "INVALIDA"));
      Serial.println();
    }

   
  

  delay(5000);
}
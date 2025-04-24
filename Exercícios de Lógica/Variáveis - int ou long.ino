// C++ code
//
void setup()
{
  Serial.begin(9600);
}

//Inicialização de Variáveis
int caixaPequena = 0;// -32768 até 32767
long caixaGrande = 0;// - 2174483648 até 2174483648

void loop()
{
  caixaPequena = 32768098;//truncou o valor (cortou, pois estoura a faixa permitida)
  caixaGrande = 32768098;
  
  Serial.println(caixaPequena);
  Serial.println(caixaGrande);
  delay(10000);//10 segundos 
}
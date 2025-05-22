// C++ code
//Variáveis
int contadorTabuada = 0;
int tabuada = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
 
{
  Serial.println("Escolha uma tabuada do 1 ao 10");
  while(! Serial.available());
  tabuada = Serial.parseInt();
  
  for(int contadorTabuada = 1; contadorTabuada <= 10; contadorTabuada++)
  {
  tabuada = contadorTabuada * contadorTabuada++;
  Serial.println(String(contadorTabuada));
  }
  delay(3000);
}
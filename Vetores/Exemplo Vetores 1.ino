// C++ code
//

void setup()
{
  Serial.begin(9600);
  
  /*String produtos[2] = {"Amaciante", "Sabao em po"};
  Serial.println(String("Produtos do vetor: ") + produtos[0]);*/
  
  int numeros[5] = {10, 20, 30, 40, 50};
  
  for(int i = 0; i <= 4; i++)
  {
  Serial.println(String("Numeros do vetor: ") + numeros[i]);
  }
  
  //imprime os números do array/vetor, um por um. 
 /* Serial.println(String("Numeros do vetor: ") + numeros[0]);
  Serial.println(String("Numeros do vetor: ") + numeros[1]);
  Serial.println(String("Numeros do vetor: ") + numeros[2]);
  Serial.println(String("Numeros do vetor: ") + numeros[3]);
  Serial.println(String("Numeros do vetor: ") + numeros[4]);*/

  delay(3000);
}

void loop()
{
  
}
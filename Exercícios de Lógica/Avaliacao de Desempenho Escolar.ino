// C++ code
/*📝 Enunciado: Avaliação de Desempenho Escolar
Você foi contratado para criar um sistema que analisa a situação de um aluno com base em suas notas e frequência.

Regras:
Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!*/
//Variáveis
float nota1 = 0;
float nota2 = 0;
float media = 0;
float frequencia = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota");
  while(!Serial.available());
  nota1 = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota");
  while(!Serial.available());
  nota2 = Serial.parseFloat();
  
  Serial.println("Digite a frequencia (sendo 1 = 100%)");
  while(!Serial.available());
  frequencia = Serial.parseFloat();
  
  media = (nota1 + nota2) / 2;
  frequencia = frequencia * 100;
  
  if(media > 6 && frequencia > 0.75)
  {
  	Serial.println("APROVADO");
    Serial.println("A media eh: " + String(media));
    Serial.println("A frequencia eh: " + String(frequencia) + "%");
  }
  else if(media < 6 && frequencia > 0.75)
  {
  	Serial.println("REPROVADO por nota");
    Serial.println("A media eh: " + String(media));
    Serial.println("A frequencia eh: " + String(frequencia) + "%");
  }
  else if(media < 6 && frequencia > 0.75)
  {
  	Serial.println("REPROVADO por nota");
    Serial.println("A media eh: " + String(media));
    Serial.println("A frequencia eh: " + String(frequencia) + "%");
  }
  else if(media > 6 && frequencia < 0.75)
  {
  	Serial.println("REPROVADO por frequencia");
    Serial.println("A media eh: " + String(media));
    Serial.print("A frequencia eh: " + String(frequencia) + "%");
  }
  else if(media < 6 && frequencia < 0.75)
  {
  	Serial.println("REPROVADO por nota e frequencia"); 
    Serial.println("A media eh: " + String(media));
    Serial.println("A frequencia eh: " + String(frequencia) + "%");
  }
  else if(media == 10)
  {
    Serial.println("Parabéns! Nota máxima!");
    Serial.println("A media eh: " + String(media));
    Serial.println("A frequencia eh: " + String(frequencia) + "%");
  }
  
  Serial.println();
  delay(5000);
}

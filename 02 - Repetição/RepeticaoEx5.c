#include <stdio.h>

int main(){

  float salario = 0, media, a;
  int filhos = 0, respostas = 0, mediafilhos, b;
  float maior = 0, menorsalario = 0;

  do{

    printf("Insira o seu sálario e número de filhos:  ");
    scanf("%f %d", &a, &b);

    if (a > 0){
      
      salario+= a;
      filhos+= b;
      respostas++;
    
      if (a > maior){
        maior = a;
      }
      if (a <= 100){
        menorsalario++;
      }
      
    }
    
  }while (a > 0);
  
  media = salario / filhos;
  mediafilhos = filhos / respostas;
  menorsalario = 100 * (menorsalario / (float)respostas);
  
  printf("Sálario médio: %.2f", media);
  printf("\nMedia de filhos: %d", mediafilhos);
  printf("\nMaior sálario: %.2f", maior);
  printf("\nPercentual com menos de 100 reais: %.2f%%", menorsalario); 
  
  
  return 0;
}
#include <stdio.h>

int main(void) {

  char ler;
  float salario;

  //printf("Escreva A, B ou C: ");
  scanf("%s",&ler);
  scanf("%f",&salario);
  
  switch(ler) {
    case 'A': 
      salario = salario * 1.08;
      printf("%.2f", salario);
    break;
    case 'B':
      salario = salario * 1.11;
      printf("%.2f", salario);
    break;
    case 'C':
      if(salario <= 1000){
        salario = salario + 350;
        printf("%.2f", salario);
      }
      else {
        salario = salario + 200;
        printf("%.2f", salario);
      }
  }
  
  return 0;
}
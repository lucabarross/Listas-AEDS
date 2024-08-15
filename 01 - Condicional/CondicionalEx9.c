#include <stdio.h>

int main(void) {
  
  char p;
  
  //printf("Escreva o simbolo: ");
  scanf("%s", &p);

  switch(p){
    case '<': printf("SINAL DE MENOR");
    break;
    case '>': printf("SINAL DE MAIOR");
    break;
    case '=': printf("SINAL DE IGUAL");
    break;
    default: printf("OUTRO SINAL");
  }

  return 0;
}
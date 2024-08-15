#include <stdio.h>

int main(void) {

  float numerador, denominador;
  float decimal;

  printf("Digite o numerador: ");
  scanf("%f", &numerador);
  printf("Digite o denominador: ");
  scanf("%f", &denominador);

  decimal = numerador / denominador;

  printf("O valor em decimal é: %.2f", decimal);
  
  return 0;
}
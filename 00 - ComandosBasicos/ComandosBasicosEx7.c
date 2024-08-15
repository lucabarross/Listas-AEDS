#include <stdio.h>

int main(void) {

  int q, a1;
  
  int razao, primeiroTermo, quintoTermo;

  printf("Digite a razão: ");
  scanf("%d", &razao);
  printf("Digite o primeiro termo: ");
  scanf("%d", &primeiroTermo);

  quintoTermo = primeiroTermo + (4 - 1) * razao;

  printf("O valor do quinto termo é: %d", quintoTermo);
  
  return 0;
}
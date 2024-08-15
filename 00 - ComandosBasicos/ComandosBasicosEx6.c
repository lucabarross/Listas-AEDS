#include <stdio.h>

int main(void) {

  float razao, primeiroTermo;
  int decimoTermo;

  printf("Digite a razão: ");
  scanf("%f", &razao);
  printf("Digite o primeiro termo: ");
  scanf("%f", &primeiroTermo);

  decimoTermo = primeiroTermo + (decimoTermo - 1) * razao;

  printf("O décimo termo da PA é: %d", decimoTermo);
  
  return 0;
}
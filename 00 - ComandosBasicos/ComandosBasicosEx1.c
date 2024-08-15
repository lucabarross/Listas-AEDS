#include <stdio.h>

int main(void) {
  
  int x, c, d, u, inverso;

  printf("Digite um número de 3 dígitos:");
  scanf("%d", &x);

  c = x / 100;
  d = (x % 100) / 10;
  u = x % 10;

  inverso = u * 100 + d * 10 + c;

  printf("O numéro inverso será: %d", inverso);
  
  return 0;
}
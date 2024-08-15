#include <stdio.h>

int main(void) {
  
  int a, b;
  
  printf("Digite dois numeros diferentes: ");
  scanf("%d %d", &a, &b);
  
  if (a > b)
  {
    printf("%d", a);
  }
  else if (b > a)
  {
    printf("%d", b);
  }
  else {
    printf("ERRO");
  }

  return 0;
}
#include <stdio.h>

int main (){


  int n, i = 1;
  int fat = 1;
  float soma = 0;
  
  printf("Insira um valor: ");
  scanf(" %d", &n);

  for(; i < n; i++){

    fat = i*fat;
    soma+= 1.0/fat;
  }
  
  
  printf("Soma = %.2f", 1 + soma);
  return 0;
  
}

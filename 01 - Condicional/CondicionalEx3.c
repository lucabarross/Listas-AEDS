#include <stdio.h>

int main(void) {
  
  int anoNasc, idade;
  int anoA = 2023;
  char aniv;
  
  printf("Escreva o ano: ");
  scanf("%d", &anoNasc);
  
  idade = anoA - anoNasc;

  printf("Você já fez aniversário (S/N): ");
  scanf("%s", &aniv);
  
  if (aniv == 'N'){
    idade --;
  }
  
  printf("%d\n", idade);
  
  if (idade >= 18){
    printf("Pode dirigir\n");
  }
  else{
    printf("Não pode dirigir\n");
  }   
  
  return 0;
}
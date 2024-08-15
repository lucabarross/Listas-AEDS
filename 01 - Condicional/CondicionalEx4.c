#include <stdio.h>

int main(void) {
  
  int a;
  
  printf("Escreva a nota: ");
  scanf("%d", &a);
  
  if(a >= 8 && a <= 10){
    printf("Ótimo");
  }
  else if(a >= 7 && a < 8){
    printf("Bom");
  }
  else if(a >= 5 && a < 7){
    printf("Regular");
  }
  else{
    printf("Insatísfatório");
  }
  
  return 0;
}
#include <stdio.h>

int main(void) {
  
  float x, y, z;
  
  //printf("Escreva o valor: ");
  scanf("%f", &x);

  if(x <= 1){
    printf("1");
  }
  else if(1 < x && x <= 2){
    printf("2");
  }
  else if(2 < x && x <= 3){
    z = x*x;
    printf("%.2f", z);
  }
  else if(x > 3){
    z = x*x*x;
    printf("%.2f", z);
  }


  
  return 0;
}
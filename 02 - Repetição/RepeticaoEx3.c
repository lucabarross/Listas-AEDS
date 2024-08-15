#include <stdio.h>

int main (){

  int divisivel1 = 0, divisivel2 = 0 , divisivel3 = 0;
  float n;

  for (int i = 0; i < 10; i++){

    printf("\nInsira um valor: ");
    scanf("%f", &n);

    if ( (int)n % 3 == 0 && (int)n % 9 == 0){
      divisivel1++;
    }
    else if ( (int)n % 2 == 0){
      divisivel2++;
    }
    else if ( (int)n % 5 == 0){
      divisivel3++;
    }
    else{
      printf("\nNúmero não é divisível pelos valores");
    }
  }

  printf("\n%d Números são divisíveis por 3 e por 9", divisivel1);
  printf("\n%d Números são divisíveis por 2", divisivel2);
  printf("\n%d Números são divisíveis por 5", divisivel3);

  return 0;

}
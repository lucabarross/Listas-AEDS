#include <stdio.h>

int main(void) {

  int positivos = 0, negativos = 0, zeros = 0;
  int numero;

  for (int i = 0; i < 10; i++){
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero > 0){
      positivos++;
    }
    else if(numero < 0){
      negativos++;
    }
    else{
      zeros++;
    }
  }

  printf("Positivos: %d\n", positivos);
  printf("Negativos: %d\n", negativos);
  printf("Zeros: %d\n", zeros);

  return 0;
}
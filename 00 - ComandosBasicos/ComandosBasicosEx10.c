#include <stdio.h>

int main(void) {

  int hora;

  printf("Digite a hora(em minutos): ");
  scanf("%d", &hora);

  hora = hora / 60;

  printf("A hora é: %d", hora);
  
  return 0;
}
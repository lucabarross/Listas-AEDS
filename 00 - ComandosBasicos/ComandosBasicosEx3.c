#include <stdio.h>
#include <math.h>

int main(void) {

  int base, altura, area, perimetro, diagonal;

  printf("Digite a base: ");
  scanf("%d", &base);

  printf("Digite a altura: ");
  scanf("%d", &altura);

  area = base * altura;
  perimetro = 2 * (base + altura); 
  diagonal = sqrt(pow(base, 2)) + pow(altura, 2);

  printf("A area do retângulo é: %d", area);
  printf("O perimetro do retângulo é: %d", perimetro);
  printf("A diagonal do retângulo é: %d", diagonal);
  
  return 0;
}
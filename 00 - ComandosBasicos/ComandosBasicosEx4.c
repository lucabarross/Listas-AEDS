#include <stdio.h>
#include <math.h>

int main(void) {

  int raio; 
  float perimetro, area;

  printf("Digite o raio: ");
  scanf("%d", &raio);

  perimetro = 2 * 3.14 * raio;
  area = 3.14 * pow(raio, 2);

  printf("O perimetro da circunferência é: %.2f\n", perimetro);
  printf("A area da circunferência é: %.2f\n", area);

  return 0;
}
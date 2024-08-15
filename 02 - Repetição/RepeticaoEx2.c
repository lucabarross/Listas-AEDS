#include <stdio.h>

int main() {

  int positivo = 0, negativo = 0, zeros = 0;
  float posF, negF, zerF;
  int a;
  float n, c;

  printf("Quantidade de númeors: ");
  scanf("%f", &n);

  c = n;

  for (float i = n; i > 0; i--) {

    scanf("%d", &a);

    if (a > 0) {
      positivo++;
    }
    if (a < 0) {
      negativo++;
    }
    if (a == 0) {
      zeros++;
    }
  }
    
  posF = (positivo / c) * 100.00;
  negF = (negativo / c) * 100.00;
  zerF = (zeros / c) * 100.00;

  printf("Positivos: %.2f\n", posF);
  printf("Negativos: %.2f\n", negF);
  printf("Zeros: %.2f\n", zerF);

  return 0;
}

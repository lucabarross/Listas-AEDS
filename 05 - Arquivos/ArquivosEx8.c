#include <stdio.h>

int main(void) {

  FILE *write;
  int qveiculos;
  float custoloc, fatanual, multas, manutencao;

  write = fopen("resultado.txt", "w");

  printf("");
  scanf("%d %f", &qveiculos, &custoloc);

  fatanual = ((qveiculos / 3) * custoloc) * 12;
  multas = ((qveiculos / 3) / 10) * (custoloc * 0.2);
  manutencao = (qveiculos * 0.02) * 600;

  fprintf(write, "%.2f\n", fatanual);
  fprintf(write, "%.2f\n", multas);
  fprintf(write, "%.2f", manutencao);

  fclose(write);


  return 0;
}
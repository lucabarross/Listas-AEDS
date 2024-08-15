#include <stdio.h>

int main(void) {

  FILE *arq;
  char c [1000];

  arq = fopen("q2.txt", "w");

  printf("");
  fgets(c, 1000, stdin);
  fprintf(arq, "%s", c);

  fclose(arq);

  return 0;
}
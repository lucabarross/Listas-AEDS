#include <stdio.h>

int main(void) {

  FILE *arq;

  arq = fopen("q1.txt", "w");

  for (int i = 1; i<=10; i++){

    if(i == 10){
      fprintf(arq, "%d", i);
    }
    else{
      fprintf(arq, "%d\n", i);
    }

  }
  fclose(arq);

  return 0;
}
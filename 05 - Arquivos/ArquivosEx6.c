#include <stdio.h>

int main(void) {

  FILE *write;
  int n, soma = 0;

  write = fopen("q6.txt", "w");

  printf("");
  scanf("%d", &n);

  for( int i = 1; i <= n; i++){
    if( (n % i) == 0){
      printf("%d\n", i);
      soma+= i;
    }
  }

  fprintf(write, "%d", soma);

  return 0;
}
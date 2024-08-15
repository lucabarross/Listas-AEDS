#include <stdio.h>

int main(void) {

  FILE *read;
  char letra;
  int linhas = 0;

  read = fopen("entrada.txt", "r");

  while ((letra = fgetc(read)) != EOF){
    printf("%c", letra);
    if (letra == '\n'){
      linhas++;
    }
  }
  
  printf("%d LINHAS\n", linhas);
  
  fclose(read);

  return 0;
}
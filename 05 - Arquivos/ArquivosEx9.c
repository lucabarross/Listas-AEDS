#include <stdio.h>

int main(void) {

  FILE *read, *write;
  int entrada = 0, matricula, telefone;
  char letras;

  read = fopen("entrada.txt", "r");
  write = fopen("saida.txt", "w");

  while (entrada != 3){
    switch (entrada){

      case 1:
        printf("");
        scanf("%d %d", &matricula, &telefone);
        fprintf(write, "%d %d\n", matricula, telefone);
      break;

      case 2:
        while((letras = fgetc(read)) != EOF){
          fprintf(write, "%c", letras);
        }
      break;
    }
    printf("");
    scanf("%d", &entrada);
  }

  fclose(read);
  fclose(write);

  return 0;
}
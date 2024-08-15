#include <stdio.h>

int main(void) {

  FILE *read, *write;
  int numero, vogais = 0;
  char letra;

  read = fopen("entrada.txt", "r");
  write = fopen("q7.txt", "w");

  numero = fgetc(read);

  for(int i = 0; i <= numero; i++){
    letra = fgetc(read);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
      vogais++;
    }
  }

  fprintf(write, "%d", vogais);

  fclose(read);
  fclose(write);

  return 0;
}
#include <stdio.h>

int main(void) {

  FILE *read, *paste;
  char c;
  int a = 0;


  read = fopen("q2.txt", "r");
  paste = fopen("q3.txt", "w");

  while ((c = fgetc(read)) != EOF){
    if(c == 'a'){
      a++;
    }
  }

  fprintf(paste, "%d CARACTERES", a);

  fclose(read);
  fclose(paste);

  return 0;
}
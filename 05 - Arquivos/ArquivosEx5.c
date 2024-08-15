#include <stdio.h>

int main(void) {

  FILE *read1, *read2, *togheter, *togheter2;
  char letras;


  read1 = fopen("primeiro.txt", "r");
  read2 = fopen("segundo.txt", "r");
  togheter = fopen("q5.txt", "w");

  while ((letras = fgetc(read1)) != EOF){

    fprintf(togheter, "%c", letras); 
  }


  while ((letras = fgetc(read2)) != EOF){

    fprintf(togheter, "%c", letras);

  }

  fclose(read1);
  fclose(read2);
  fclose(togheter);

  return 0;
}
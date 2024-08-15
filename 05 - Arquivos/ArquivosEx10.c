#include <stdio.h>
#include <limits.h> 

int main(void) {

  FILE *read;
  float max = INT_MIN, min = INT_MAX, numeros, soma = 0, media;
  int quantnumeros = 0;

  read = fopen("entrada.txt", "r");

  while (fscanf(read, "%f", &numeros) != EOF){
    if(numeros > max){
      max = numeros;
    }

    if (numeros < min){
      min = numeros;
    }
    
    soma += numeros; 
    quantnumeros++;
  }

  media = (float)soma / quantnumeros;

  printf("%.2f\n", max);
  printf("%.2f\n", min);
  printf("%.2f\n", media);

  return 0;
}
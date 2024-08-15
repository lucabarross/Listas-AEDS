#include <stdio.h>

double Fatorial (int n)
{
  if (n == 0){
    return 1;
  }
  else{
    return n * Fatorial(n-1); 
  }
}

double Serie (int n)
{
  if (n == 0){
    return 0;
  }
  else{
    return 1.0 / Fatorial(n) + Serie(n-1); 
  }
}


int main(){
  int numero;
  float resposta;

  printf("");
  scanf("%d", &numero); 

  resposta = Serie(numero);

  printf("%.2f\n", resposta);

  return 0;
}
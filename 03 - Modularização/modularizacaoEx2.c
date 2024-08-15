#include <stdio.h>

void Prefeitura() {
  float salario, cont = 0, mediaSalario;
  int filhos, pessoas = 0;
  
  do {
    scanf("%f %d", &salario, &filhos);
    
    if (salario >= 0) {
      cont = cont + salario;
      pessoas++;
    }
  } while (salario >= 0);

  mediaSalario = cont / pessoas;
  printf("%.2f\n", mediaSalario);
}

int main() {
  
  Prefeitura();

  return 0;
}

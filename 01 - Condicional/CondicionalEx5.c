#include <stdio.h>

int main(void) {
  
  float diaria = 200;
  float apart, valorT, diaria2 = 200, valorT2, apart2, dif;
  
  //a) o valor da diária promocional; 
    diaria = 200 -(200*0.25);
    printf("Valor promocional: %.2f\n", diaria);
  
  //b) o valor total arrecadado com 80% de ocupação e diária promocional;
    apart = 80*0.80;
    valorT = diaria*apart;
    printf("Promocional com 80%% ocupado: %.2f\n", valorT);
  
  //c) o valor total arrecadado com 50% de ocupação e diária normal;
    apart2 = 80*0.50;  
    valorT2 = diaria2*apart2;
    printf("Normal com 50%% ocupado: %.2f\n", valorT2);
  
  //d) a diferença entre estes dois valores
    dif = valorT - valorT2;
    printf("Diferença entre os valores: %.2f\n", dif);
  
  return 0;
}
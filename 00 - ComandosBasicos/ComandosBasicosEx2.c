#include <stdio.h>

int main(void) {

  float salariominimo, kilowatt;

  printf("valor do salario mínimo:   ");
  scanf("%f", &salariominimo);
  
  printf(" quantidade de kilowatt gasta por uma residência:   ");
  scanf("%f", &kilowatt);

  printf("\n\n o valor em reais de cada kilowatt:  %.2f \n\n", (salariominimo * 1/7 * 1/100));
  
  printf("valor em reais a ser pago:  %.2f \n \n", (kilowatt * salariominimo * 1/7 * 1/100));

  printf(" novo valor a ser pago por essa residência com um desconto de 10%:  %.2f", (kilowatt * salariominimo * 1/7 * 1/100 * 9/10));
  
  return 0;
}
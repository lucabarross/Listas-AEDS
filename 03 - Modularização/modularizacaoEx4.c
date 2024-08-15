#include <stdio.h>

void Triangulos(int lado1, int lado2, int lado3) {
    
  if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 +     
  lado2) {
    if (lado1 == lado2 && lado2 == lado3) {
      printf("TRIANGULO EQUILATERO\n");
    } 
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
      printf("TRIANGULO ISOSCELES\n");
    } 
    else{
      printf("TRIANGULO ESCALENO\n");
    }
  } 
  else {
    printf("NÃO TRIANGULO\n");
  }
}

int main(void) {
  int a, b, c;

  do {
    printf("");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= 0 && b >= 0 && c >= 0) {
      Triangulos(a, b, c);
    }
  } while (a >= 0 && b >= 0 && c >= 0);
  
  return 0;
}

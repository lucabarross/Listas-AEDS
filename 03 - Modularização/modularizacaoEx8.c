#include <stdio.h>

float Calculo(int x){

  float s = 0, a;

  a = (x*2.0 + 1.0) / (x +3.0);
  s+=a;

  return s;
}

int main (){

  int a;
  float b;

  printf("");
  scanf("%d", &a);

  b = Calculo(a);

  printf("%f", b);

  return 0;
}
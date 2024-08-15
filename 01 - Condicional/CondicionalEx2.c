#include <stdio.h>

int main(void) {

  int a, b, c;

  printf("Digite dois números: ");
  scanf("%d %d", &a, &b);
  
  c = a + b;

  if (c >= 10){
    c = c + 5;
  }
  else{
    c = c + 7;
  }
  printf("%d", c);
 
  return 0;
}
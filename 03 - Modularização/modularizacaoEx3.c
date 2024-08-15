#include <stdio.h>

void ordemCrescente (int a, int b, int c){

  if (a < b && a < c){
    if( b < c ){
      printf("%d %d %d\n", a, b, c);
    }
    else{
      printf("%d %d %d\n", a, c, b);
    }
  }
  else if (b < a && b < c){
    if( a < c){
      printf("%d %d %d\n", b, a, c);
    }
    else{
      printf("%d %d %d\n", b, c, a);
    }
  }
  else{
    if( b < a ){
      printf("%d %d %d\n", c, b, a);
    }
    else{
      printf("%d %d %d\n", c, a, b);
    }
  }
}

int main(void) {
  
  int N, a, b, c;

  printf("");
  scanf("%d", &N);

  for (int i = 0; i < N; i++){
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    
    ordemCrescente(a, b, c);
  }
  
  return 0;
}
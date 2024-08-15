#include <stdio.h>

void mediaFinal (int x){

  if (x <= 39){
    printf("F\n");
  }
  if ( x >= 40 && x <= 59){
    printf("E\n");
  }
  if (x >= 60 && x <= 69){
    printf("D\n");
  }
  if (x >= 70 && x <= 79){
    printf("C\n");
  }
  if (x >= 80 && x <= 89){
    printf("B\n");
  }
  if (x >= 90){
    printf("A\n");
  }

}

int main(){

  int N, x;

  printf("");
  scanf("%d", &N);

  for (int i = 0; i < N; i++){
    scanf("%d", &x);
    mediaFinal(x);
  }

  return 0;
}
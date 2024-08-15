#include <stdio.h>

int Contador (int x, int n){

  if (x / n == 0){
    return 0;
  }
  else {
    return 1 + Contador(x, n * 10);
  }

}

int main(){

  int n, a;

  printf("");
  scanf("%d", &n);

  a = Contador(n, 1);

  printf("%d", a);
  
    return 0;
}
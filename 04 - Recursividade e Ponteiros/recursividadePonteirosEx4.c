#include <stdio.h>

int Resto (int n, int d)
{
  if ( n < d){
    return n;
  }
  else{
    return Resto(n - d, d); 
  }
}


int main(){
  int n, d, a;

  printf("");
  scanf("%d %d", &n, &d);

  a = Resto(n, d);

  printf("%d", a);

  return 0;
}




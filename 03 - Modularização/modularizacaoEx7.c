#include <stdio.h>

char Valor (int a){

  if (a > 0){
    return 'V'; 
  }
  else{
    return 'F';
  }

}


int main(){

  int n, entrada;
  char a = 'V', b;

  printf("");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("");
    scanf("%d", &entrada);

    b = Valor(entrada);

    if ( a == b ){
      printf("SIM\n");
    }
    else{
      printf("NAO\n");
    }
  }

  return 0;
}
#include <stdio.h>

void mediaAluno (int nota1, int nota2, int nota3, char letra){

  float media, mediaPond;
  
  if(letra == 'A'){
    media = (nota1 + nota2 + nota3)/3.0;
    printf("%.2f\n", media);
  }
  else if(letra == 'P'){
    mediaPond = (nota1*5 + nota2*3 + nota3*2)/10.0;
    printf("%.2f\n", mediaPond);
  }
}

int main(){

  int nota1, nota2, nota3;
  char letra;
  int N;

  printf("");
  scanf("%d\n", &N);

  for(int i = 0; i < N; i++){
    printf("");
    scanf("%d %d %d %c", &nota1, &nota2, &nota3, &letra);

    mediaAluno(nota1, nota2, nota3, letra);  
  }
  
  return 0;
}










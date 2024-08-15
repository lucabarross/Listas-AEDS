#include <stdio.h>

int main(void) {
  
  int veloAv, veloVei, dif;
  
  //printf("Escreva as velocidades: ");
  scanf("%d", &veloAv);
  scanf("%d", &veloVei);

  if(veloVei <= veloAv){
    printf("Motorista respeitou a lei");
  }
  else if(veloVei > veloAv){
    dif = veloVei - veloAv;
  if(dif == 10){
    printf("MULTA DE 50 REAIS");
  }
  else if(dif > 10 && dif <= 30){
    printf("MULTA DE 100 REAIS");
  }
  else if(dif > 30){
    printf("MULTA 200 REAIS");
  }   
  }
  
  return 0;
}
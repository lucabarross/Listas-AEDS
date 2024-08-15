#include <stdio.h>

void converteHora(int totalsegundos, int *hora, int *min, int *seg)
{
 *hora = totalsegundos / 3600;
 *min = (totalsegundos % 3600) / 60 ;
 *seg = (totalsegundos % 3600) % 60;
}

int main(){
  int segundos, hora, min, seg;

  printf("");
  scanf("%d", &segundos);

  converteHora(segundos, &hora, &min, &seg);

  printf("%d:%d:%d", hora, min, seg);

  return 0;
}
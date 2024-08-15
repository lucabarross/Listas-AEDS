#include <stdio.h>

char Nadador(int idade) {
  if (idade >= 5 && idade <= 7) {
    return 'F';
  } 
  else if (idade >= 8 && idade <= 10) {
    return 'E';
  } 
  else if (idade >= 11 && idade <= 13) {
     return 'D';
  } 
  else if (idade >= 14 && idade <= 15) {
    return 'C';
  } 
  else if (idade >= 16 && idade <= 17) {
    return 'B';
  } 
  else {
    return 'A';
  }
}

int main() {
  int a, idade;
  printf("");
  scanf("%d", &a);

  for (int i = 0; i < a; i++) {
    scanf("%d", &idade);
    char categoria = Nadador(idade);
    printf("%c\n", categoria);
  }

  return 0;
}

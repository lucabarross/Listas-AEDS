#include <stdio.h>

float mediaNotas(int alunos) {
  float nota, soma = 0;
  int cont = 0;

  for (int i = 0; i < alunos; i++) {
    scanf("%f", &nota);

    if (nota >= 6) {
      soma = soma + nota;
      cont++;
    }
  }

  return soma / cont;
}

int main() {
  int alunos;
  float media;

  printf("");
  scanf("%d", &alunos);

  media = mediaNotas(alunos);

  printf("%.1f", media);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

void Inserir (float vetor[10]){

    float nota;

    for (int i = 0; i < 10; i++){
        printf("");
        scanf("%f", &nota);
        vetor[i] = nota;
    }
}

void Media (float vetor [10]){

    int contador = 0;
    float soma = 0, media;

    for(int i = 0; i < 10; i++){
        soma+= vetor[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++){
        if (vetor[i] >= media){
            contador++;
        }
    }

    printf("Média: %.2f\n", media);
    printf("Alunos acima da média: %d", contador);

}

int main(){

    float vetor[10];

    Inserir(vetor);
    Media(vetor);

    return 0;
}
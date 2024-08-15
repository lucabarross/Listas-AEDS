#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){

    int vetor[31];
    int numero, maior = -1, menor = INT_MAX;
    int soma = 0, contador = 0;
    float media;


    for (int i = 0; i < 31; i++){
        printf("", i+1);
        scanf("%d", &numero);
        vetor[i] = numero;
    }

    for (int i = 0; i < 31; i++)
    {
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }

        soma += vetor[i];
    }

    media = soma / 31.0;

    for (int i = 0; i < 31; i++)
    {
        if(vetor[i] < media){
            contador++;
        }
    }

    printf("Menor e maior temperatura: %d e %d\n", menor, maior);
    printf("Média de temperatura: %.2f\n", media);
    printf("Número de dias nos quais a temperatura foi inferior à temperatura média: %d", contador);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Preencher (int array[4][4]){

    int valor;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("");
            scanf("%d", &valor);
            array[i][j] = valor;
        }

    }

}

void Soma (int array[4][4]){

    int soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j < i && i > 0){
                soma += array[i][j];
            }
        }

    }


    printf("%d\n", soma);
}

void Diagonal_Principal (int array [4][4]){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {   
            if (i == j )
            {
                printf("%d ", array[i][j]);
            }

        }

    }

}

int main()
{
    
    int vetor[4][4];

    Preencher(vetor);
    Soma(vetor);
    Diagonal_Principal(vetor);

    return 0;
}
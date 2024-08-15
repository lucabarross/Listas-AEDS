#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void Preencher (int *array, int numero)
{

    for (int i = 0; i < numero; i++)
    {
        scanf("%d", (array+i));
    }

}

int Maior (int *array, int numero)
{

    int maior = INT_MIN;

    for (int i = 0; i < numero; i++)
    {
        if (*(array+i) > maior)
        {
            maior = *(array + i);
        }
    }

    return maior;

}

int main(int argc, char const *argv[])
{
    int *array, numero, maior;

    scanf("%d", &numero);

    array = malloc(numero*(sizeof(int)));

    Preencher(array, numero);

    maior = Maior(array, numero);

    printf("%d", maior);

    free(array);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Preencher (int *array, int numero)
{
    for (int i = 0; i < numero; i++)
    {
        scanf(" %d", (array + i));
    }
}

int Somar (int *array, int numero)
{
    int soma = 0;

    for (int i = 0; i < numero; i++)
    {
        soma += *(array + i);
    }

    return soma;
}

int main()
{
    int *array, numero, soma;

    printf("");
    scanf("%d", &numero);

    array = malloc(numero*sizeof(int));

    printf("");
    Preencher(array, numero);

    soma = Somar(array, numero);

    printf("%d", soma);

    free(array);

    return 0;
}
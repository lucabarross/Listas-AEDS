#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Contador(char *array, int *vogais, int *consoantes)
{
    int tamanho = strlen(array);

    for (int i = 0; i < tamanho; i++)
    {
        if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' ||
            array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U')
        {
            (*vogais)++;
        }
        else if ((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z'))
        {
            (*consoantes)++;
        }
    }
}

int main()
{
    char *array;
    int vogais = 0, consoantes = 0;

    array = malloc(100 * sizeof(char));

    printf("");
    scanf("%[^\n]", array);

    Contador(array, &vogais, &consoantes);

    printf("Vogais: %d\nConsoantes: %d", vogais, consoantes);

    free(array);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void Completar(int *array, int numero) {
    for (int i = 0; i < numero; i++) 
    {
        scanf("%d", (array + i));
    }
}

void Ordenar(int *array, int numero) 
{
    int temp;
    
    for (int i = 0; i < numero - 1; i++) 
    {
        for (int j = i + 1; j < numero; j++) 
        {
            if (array[i] > array[j]) 
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void Printar(int *array, int numero) {
    for (int i = 0; i < numero; i++) {
        printf("%d ", *(array + i));
    }
}

int main() {
    int numero, *array;

    scanf("%d", &numero);

    array = malloc(numero * sizeof(int));

    Completar(array, numero);
    Ordenar(array, numero);
    Printar(array, numero);

    free(array);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Trocar(char *str, int length) {
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    int letras;
    char *vetor;

    printf("");
    scanf("%d", &letras);

    vetor = (char*)malloc((letras + 1) * sizeof(char));

    printf("");
    scanf("%s", vetor);

    Trocar(vetor, letras);

    printf("%s\n", vetor);

    free(vetor);

    return 0;
}
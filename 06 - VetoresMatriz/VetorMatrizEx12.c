#include <stdio.h>
#include <string.h>

void Trocar(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void Permutacao(char *str, int a, int b) {
    if (a == b) {
        printf("%s ", str);
    } 
    
    else 
    {
        for (int i = a; i <= b; i++) 
        {
            Trocar((str + a), (str + i));
            Permutacao(str, a + 1, b);
            Trocar((str + a), (str + i));
        }
    }
}

int main() {
    char str[100];

    printf("");
    scanf("%s", str);

    printf("As permutações da string são:\n");
    Permutacao(str, 0, strlen(str) - 1);

    return 0;
}

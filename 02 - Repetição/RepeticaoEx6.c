#include <stdio.h>

int main(){


    int a;
    float S = 0;

    printf("Insira um valor: ");
    scanf("%d", &a);

    for(int i = 1; i <= a ; i++){
        S+= 1.0 / i;

    }

    printf("A soma e igual a: %.2f", S);




    return 0;
}


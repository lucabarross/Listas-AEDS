#include <stdio.h>

int main(){

    int n = 1;
    int somacand1 = 0, somacand2 = 0 , somacand3 = 0;
    int somacand4 = 0, nulo = 0, branco = 0;

    while(n != 0){

        printf("Insira seu voto: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            somacand1++;
        break;

        case 2:
            somacand2++;
        break;

        case 3:
            somacand3++;
        break;

        case 4:
            somacand4++;
        break;

        case 5:
            nulo++;
        break;

        case 6:
            branco++;
        break;

        default:
            if( n != 0){ 
                printf("Nao eh valido\n");
            }
        break;
        }
    }

    printf("Candidato 1: %d", somacand1);
    printf("\nCandidato 2: %d", somacand2);
    printf("\nCandidato 3: %d", somacand3);
    printf("\nCandidato 4: %d", somacand4);
    printf("\nVoto nulo: %d", nulo);
    printf("\nVoto em branco: %d", branco);

    return 0;
}
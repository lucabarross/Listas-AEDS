#include <stdio.h>
#include <stdlib.h>

void Preencher (int dembele[4][6]){

    int valor;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("");
            scanf ("%d", &valor);
            dembele[i][j] = valor;
        }

    }

}

void Soma (int ney[4][6], int ankaramessi[4][6], int cr7[4][6]){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cr7[i][j] = ney[i][j] + ankaramessi[i][j];
        }

    }

}

void Diferenca (int ney[4][6], int ankaramessi[4][6], int mbape[4][6]){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            mbape[i][j] = ney[i][j] - (ankaramessi[i][j]);
        }

    }

}

void Printar (int jogador[4][6]){

    for (int i = 0; i < 4; i++)
    {   
        printf("");

        for (int j = 0; j < 6; j++)
        {
            printf("%d ", jogador[i][j]);
        }
    }
}

int main()
{
    int ney[4][6], ankaramessi[4][6], cr7[4][6], mbape[4][6];

    Preencher(ney);
    Preencher(ankaramessi);
    Soma(ney, ankaramessi, cr7);
    Diferenca(ney, ankaramessi, mbape);
    Printar (cr7);
    printf("");
    Printar (mbape);

    return 0;
}
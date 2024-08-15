#include <stdio.h>
#include <stdlib.h>

void Printar (int maradona [10][10]){

    for (int i = 0; i < 10; i++)
    {
        printf("\n");

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", maradona[i][j]);
        }

    }

    printf("\n");   
}

void Preencher (int pele [10][10]){

    int valor;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("");
            scanf("%d", &valor);
            pele[i][j] = valor;
        }

    }

    Printar(pele);

}

void Letra_a (int antony[10][10]){

    int casemiro[10];

    for (int j = 0; j < 10; j++)
    {
        casemiro[j] = antony[1][j];
    }

    for (int j = 0; j < 10; j++)
    {
        antony[1][j] = antony[7][j];
        antony[7][j] = casemiro[j];
    }

    Printar(antony);
}

void Letra_b (int vinijr[10][10]){

    int rodrygo[10];

    for (int i = 0; i < 10; i++)
    {
        rodrygo[i] = vinijr[i][3]; 
    }

    for (int i = 0; i < 10; i++)
    {
        vinijr[i][3] = vinijr[i][9];
        vinijr[i][9] = rodrygo[i];
    }

    Printar(vinijr);

}

void Letra_c (int halland[10][10]){

    int debruyne[10], curtua[10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                debruyne[i] = halland[i][j]; 
            }
            if (i == j)
            {
                curtua[i] = halland[j][i]; 
            }

        }

    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                halland[i][j] = curtua[i];
            }

        }

        for (int j = 0; j < 10; j++)
        {
            halland[j][i] = debruyne[j];
        }

    }

    Printar(halland);

}

void Letra_d (int ney[10][10]){

    int messi[10];

    for (int j = 0; j < 10; j++)
    {
        messi[j] = ney[4][j];
    }

    for (int i = 0; i < 10; i++)
    {
        ney [4][i] = ney[i][9];
        ney[i][9] = messi[i];
    }

    Printar(ney);

}


int main()
{
    int pele_rei[10][10];

    Preencher(pele_rei);
    Letra_a(pele_rei);
    Letra_b(pele_rei);
    Letra_c(pele_rei);
    Letra_d(pele_rei);

    return 0;
}
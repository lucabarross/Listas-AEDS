#include <stdio.h>
#include <stdlib.h>

void Preencher (int array[5][5]){

    int valor;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("");
            scanf("%d", &valor);
            array[i][j] = valor;
        }
    }
}

int Linha_4 (int array[5][5]){

    int soma = 0;

    for (int j = 0; j < 5; j++)
    {
        soma+= array[3][j];
    }

    return soma;
}


int Coluna_2 (int array [5][5]){

    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        soma+= array[i][1];
    }

    return soma;
}

int Diagonal_Principal (int array[5][5]){

    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                soma+= array[i][j];
            }

        }

    }

    return soma;

}

int Diagonal_Secundaria (int array[5][5]){

    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if( j == i){
                soma += array[j][i]; 
            }
        }

    }

    return soma;   
}

int Soma_Total (int array[5][5]){

    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma+= array[i][j];
        }

    }

    return soma;

}

int main(){

    int array[5][5];
    int soma_linha, soma_coluna;
    int diagonal_principal, diagonal_secundaria, soma_tudo;

    Preencher(array);

    printf("%d", soma_linha = Linha_4(array));
    printf("\n%d", soma_coluna = Coluna_2(array));
    printf("\n%d", diagonal_principal = Diagonal_Principal(array));
    printf("\n%d", diagonal_secundaria = Diagonal_Secundaria(array));
    printf("\n%d", soma_tudo = Soma_Total(array));

    return 0;
}
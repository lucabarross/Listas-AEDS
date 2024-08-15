#include <stdio.h>

int main(){

    float preco, venda;
    int menos10 = 0, meio10 = 0, maior20 = 0;
    float sompreco = 0, somvenda = 0;

    while (preco != 0 || venda != 0){

        printf("Insira o valor de compra e venda: ");
        scanf("%f %f", &preco, &venda);

        if ( (venda * 100) / preco < 110){
            menos10++;
        }
        else if( (venda * 100) / preco > 110 && (venda * 100) / preco < 120){
            meio10++;
        }
        else {
            maior20++;
        }

        sompreco+= preco;
        somvenda+= venda;

    }

    printf("Menos de 10%%: %d", menos10);
    printf("\nMaior de 10%% e menor de 20%%: %d", meio10);
    printf("\nMaior que 20%%: %d", maior20);
    printf("Soma total dos precos de compra: %.2f", sompreco);
    printf("Soma total dos precos de venda: %.2f", somvenda);
    printf("Lucro total: %.2f", (somvenda - sompreco) );


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void Preencher (int vetor[10]){

    int valor;

    for(int i = 0; i < 10; i++){
        scanf("%d", &valor);
        vetor[i] = valor;
    }

}

void Intercalar(int X[10], int Y[10], int Z[20]){
    
    int i = 0, j = 0, k = 0;

    while (i < 10 && j < 10) {
        Z[k++] = X[i++];
        Z[k++] = Y[j++];
    }

    while (i < 10){
        Z[k++] = X[i++];
    }  

    while (j < 10){
       Z[k++] = Y[j++]; 
    }
        
}

void Printar(int vetor[20]){
    
    for (int i = 0; i < 20; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){

    int X[10], Y[10], Z[20];

    Preencher(X);
    Preencher(Y);
    Intercalar(X,Y,Z);
    Printar(Z);

    return 0;
}
#include <stdio.h>

int main(){

    int n, a = 1;
    int anterior1 = 0 , anterior2 = 1 ;
    
    printf("Insira um valor: ");
    scanf("%d", &n);
    
    while (a < n) {
        
        printf("\n%d", a);

        a = anterior1 + anterior2;
        anterior1 = anterior2;
        anterior2 = a;

    }    



    return 0;
}
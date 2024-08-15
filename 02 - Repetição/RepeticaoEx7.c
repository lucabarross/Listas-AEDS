#include <stdio.h>

int main(){


    int n, a;
    int anterior1 = 1 , anterior2 = 1 ;

    printf("Insira um valor: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        if(i < 2){
            printf("\n 1");
        }
        else{
             
            a = anterior1 + anterior2;
            printf("\n %d", a);
            anterior2 = anterior1;
            anterior1 = a;
        }

    }



    return 0;
}
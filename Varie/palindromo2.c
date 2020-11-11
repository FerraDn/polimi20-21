#include <stdio.h>

int main(){

    int n, resto, palin = 0;
    int ris = 0, ex = 10;
    int div;

    scanf("%d", &n);
    div = n/ex;

    while(div != 0 && !palin){
        div = n/ex;
        resto = n % ex;
        ris = ris*10 + (resto/(ex/10));

        if(ris == n)
            palin = 1;

        ex = ex*10;
    }
    printf("\n%d\n", palin);
    return 0;
}
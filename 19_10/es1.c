#include <stdio.h>


int fattoriale(int);

int main(){
    int diff, n, k, res;

    scanf("%d", &n);
    scanf("%d", &k);
    while(n < 0 || k < 0){
        printf("Inserisci numeri positivi: ");
        scanf("%d", &n);
        scanf("%d", &k);

    }

    diff = fattoriale(n - k);
    n = fattoriale(n);
    k = fattoriale(k);
    res = n/(k*diff);


    printf("%d", res);

    return 0;
}

/*
int semplifica(fraz_t f){
    /*
    int mcd = f.k, meno = 0;
    
    if(f.n < mcd)
        mcd = f.n;
    while(f.n !% mcd || f.k !% mcd){
        mcd--;
    }
    f.n /= mcd;
    f.k /= mcd;

    if(f.k < 0){
        f.n *= 1;
        f.k *= 1;
    }
    return f;
}
*/
int fattoriale(int n){
    int i,prod = 1;
    for(i = 1; i<=n; i++){
        prod *= i;
    }
    return prod;
}
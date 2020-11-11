#include <stdio.h>

int isPrime(int);

int isPrime(int num){
    int primo = 0, mcd;
    if(num > 1){
        mcd = 2;
        while((num%mcd) != 0){
            mcd++;

        }
        if(num == mcd){
            primo = 1;
        }
    }

    return primo;
    
}
int main(){
    int n, i, j;
    scanf("%d", &n);
    printf("%d",isPrime(11));
    while(n<2 || n%2 != 0){
        printf("Inserisci un numero valido: ");
        scanf("%d", &n);
    }

    for(i=1; i< n; i++){
        if(isPrime(i)){
            for(j=i; j<n; j++){
                if(isPrime(j) && (j+i == n))
                    printf("%d + %d = %d\n", i, j, n);
            }
        }
    }
        

    return 0;
}
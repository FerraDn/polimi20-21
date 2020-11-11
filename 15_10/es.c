#include <stdio.h>

typedef struct{
    int num, den;
} fraz_t;

int main(){
    fraz_t n1, n2, r;
    int mcm, min, i, flag = 0;
    scanf("%d%d%d%d", &n1.num, &n1.den, &n2.num, &n2.den);
    r.den = n1.den*n2.den;
    r.num = n1.num*n2.den+n2.num*n1.den;
    min = r.den;
    if(r.num < min)
        min = r.num;

    i = min;
    for(i = min; i>0 && !flag; i--){
        
        if(!(r.den % i) && !(r.num % i))
            flag = 1;
    }
    
    r.den /= i;
    r.num /= i;
    if(r.den<0){
        r.num *= -1;
        r.den *= -1;
    }

    printf("%d/%d", r.num, r.den);
    return 0;
}
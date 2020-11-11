#include <stdio.h>

void es1(){
    int max, min, temp;
    int risultato = 0;

    scanf("%d%d", &max, &min);

    if(max <= min){
        temp = max;
        max = min;
        min = temp;
    }
    while(min <= max){
        risultato = risultato + min;
        min= min+1;
    }
    printf("Risultato: %d\n", risultato);
    
}

void es2(){
    int a, b, max, min;
    int i, mcd;
    scanf("%d%d", &a, &b);
    if(a>b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }

    //Calcolo MCD:
    i = min;
    mcd = 1;
    while(i != 0){
        if(!(max % i) && !(min % i)){
            if(i > mcd){
                mcd = i;
            } 
        }
        i = i - 1;
    }
    //
    printf("MCD: %d\n", mcd);


    
}


void es3(){
    int n = 0, current, max;

    while(n<50){
        scanf("%d", &current);
        if(current >= max)
            max = current;
        n = n+1;
    }
    printf("RESULT: %d", max);
}

void es4(){
    int numero, divisore = 1, moltiplicatore = 1, risultato = 0, cifraSign;
    scanf("%d", &numero);

    //Trovo divisore intero massimo del numero ( e quindi implicitamente lunghezza del numero )
    while(numero/divisore){ // es. 23445 / 100 000 = 0,23445 (in intero = 0) 
        divisore = divisore*10;
    }

    divisore = divisore/10; // Il divisore non è 100 000 ma 10 000

    while (divisore != 0)
    {
        cifraSign = numero/divisore; // 23445 / 10 000 = 2 
        numero = numero % divisore; // 23445 % 10 000 = 3445 
        risultato = risultato + cifraSign*moltiplicatore; // risultato = 0 + 2*1 = 2 
        divisore = divisore / 10; // 10 000 / 10 = 1000 
        moltiplicatore = moltiplicatore * 10; // 1*10 = 10
    }

    printf("Risultato %d", risultato);
    
}
int main(){
    
    
    es4();

    return 0;
}


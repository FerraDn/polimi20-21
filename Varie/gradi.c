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
        
    }
    printf("RESULT: %d", max);
}

int main(){
    
    
    es3();

    return 0;
}


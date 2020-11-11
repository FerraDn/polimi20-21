#include <stdio.h>

int main(){
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
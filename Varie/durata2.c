#include <stdio.h>

int main(){
    int b;
    float a, c;
    /* 
        Quando noi sommiamo l'intero con il float, avviene un:
        "Cast implicito"
        Int da complemento a due diventa Floating point
        Ordine di priorità:
        char < int < float < double
        ex. int + double = double
        Oss: convertire da sinistra verso destra non comporta perdita
        di dati
    */

    // a = b.c
    scanf("%f", &a);
    b = a;
    c = a-b;
    printf("%d\n%f", b, c);
    
    return 0;    
}
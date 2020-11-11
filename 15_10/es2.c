#include <stdio.h>
#define MAXT 1

typedef struct{
    int grn, ore, min, sec;
} time;

int main(){
    int i, r;
    time input[MAXT], result;
    for(i = 0; i<MAXT; i++){
        
        do
        {   printf("Inserire dati n.%d:", i);
            scanf("%d%d%d", &input[i].ore, &input[i].min, &input[i].sec);
        } while(0 >= input[i].ore && input[i].ore > 24
                && 0 >= input[i].min && input[i].min > 60
                && 0 >= input[i].sec && input[i].sec > 60);
        
    }
    
    result.grn = 0;
    result.ore = 0;
    result.min = 0;
    result.sec = 0;
    for(i = 0; i<MAXT; i++){
        result.ore += input[i].ore;
        result.min += input[i].min;
        result.sec += input[i].sec;
    }


    result.min += result.sec / 60;
    result.sec = result.sec % 60;
    result.ore += result.min / 60;
    result.min = result.min % 60;
    result.grn += result.ore / 60;
    result.ore = result.ore % 60;

    printf("%d giorni, %d ore, %d minuti, %d secondi\n", result.grn, result.ore, result.min, result.sec);




    return 0;
}
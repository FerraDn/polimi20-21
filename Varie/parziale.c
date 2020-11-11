#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *ptr_file;
    char buf[1000];
    char *current[2];
    char punteggi[12], vuoti[12];

    int riga = 1, i, j, mc_count, sub;
    int promossi=0, totali=0;
    ptr_file =fopen("parziali_risultati.txt","r");
    if (!ptr_file)
        return 1;

    for(i=0; i<12; i++)
        punteggi[i] = 0;

    while (fgets(buf,1000, ptr_file)!=NULL){
        if(!(riga % 2)){
            punteggi[atoi(buf)]++;
            totali++;
            if(atoi(buf)>=6)
                promossi++;
        }
        riga++;
    }
    mc_count = punteggi[0];
    for(i=0; i<12; i++){
        if(punteggi[i]>mc_count){
            mc_count = punteggi[i];
        }
        printf("%d\n", punteggi[i]);
        
    }
    printf("1-2-3-4-5-6-7-8-9-10-11-12\n");
    for(j=0; j<mc_count; j++){
        for(i=0; i<12; i++){
            sub = mc_count-punteggi[i];
            if(j > sub){
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
    printf("1-2-3-4-5-6-7-8-9-10-11-12\n");

    float percentuale = ((float) promossi/(float)totali)*100;
    printf("\nTotali: %d, promossi: %d, percentuale: %f", totali, promossi, percentuale);

    fclose(ptr_file);
    return 0;
}
#include <stdio.h>
#define MAXCHAR 30
#define NUMLET 8
//Controllare tipo input
int numeroVocali(char[]);

int numeroVocali(char stringa[]){
    char vocali[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i, j, counter, stop;

    for(i=0, counter=0; stringa[i]!='\0'; i++){
        stop = 0;
        for(j=0; j<NUMLET && !stop; j++){
            if(stringa[i] == vocali[j]){
                counter++;
                stop = 1;
            }
        }
    }

    return counter;
};

int main(){
    char stringa[MAXCHAR+1];
    scanf("%[^\n]", stringa);
    printf("Numero vocali: %d", numeroVocali(stringa));
    return 0;
}
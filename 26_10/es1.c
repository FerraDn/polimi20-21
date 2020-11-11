#include <stdio.h>
#define SIZE 5

void trasforma(int a1[], int *p2);
void printArray(int arr[]);

int main(){
    int a1[SIZE], a2[SIZE], i;
    int *p2 = a2;

    for(i=0; i<SIZE; i++){
        scanf("%d", &a1[i]);
        p2[i] = 0;
    }
    printArray(a1);
    trasforma(a1, p2);

    for(i=0; i<SIZE; i++){
        printf("%d", *(p2+i));
    }

    return 0;


}
void printArray(int arr[]){
    for(int i=0; i<SIZE; i++)
        printf("%d", arr[i]);
    printf("\n");
}

void trasforma(int a1[], int *p2){
    int pari=0, disp=SIZE-1;
    for(int i=0; i<SIZE; i++){
        if(a1[i]%2 == 0){
            //E' pari
            p2[pari] = a1[i];
            pari++;
        }
        else{
            //E' dispari
            p2[disp] = a1[i];
            disp--;
        }
    }
}

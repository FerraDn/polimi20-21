#include <stdio.h>
#define NC 5
#define NR 5

//il puntatore dell'array deve sapere anche la dimensione
void stampa(int [][NC], int);

int main(){
    /*
    int m[1][5];
    int (*p)[5]

    p=m;
    (*(p+1))[1] = 5;

    p=m1;
    (*(p+1))[1] = 3; //NO
    */

   //TODO: Formula per la linearizzazone
   int a[NR][NC];

    return 0;
}

void stampa(int m[][NC], int nr){
    int i, j;
    for(i=0; i<nr; i++){
        for(j=0; j<NC; j++)
            printf("%d ", m[i][j]);
        printf("/n");
    }
}

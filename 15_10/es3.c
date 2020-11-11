#include <stdio.h>

typedef struct {
    int data[5][5];
    int m, n;
} matrice;

int main(){
    matrice mat1, mat2, mat3;
    int i, j, k, somma;
    do{
        scanf("%d %d %d %d", &mat1.m, &mat1.n, &mat2.m, &mat2.n);
    }
    while(mat1.m);
    for(i = 0; i<mat1.m; i++){
        for(j = 0; j<mat1.n; j++){
            scanf("%d", &mat1.data[i][j]);
        }
    }
    for(i = 0; i<mat2.m; i++){
        for(j = 0; j<mat2.n; j++){
            scanf("%d", &mat2.data[i][j]);
        }
    }
    if(mat1.n == mat2.m){
        mat3.m = mat1.m;
        mat3.n = mat2.n;
        for(i = 0; i<mat3.m; i++){
            for (j = 0; j < mat3.n; j++)
            {
                somma = 0;
                for(k = 0; k<mat2.m; k++){
                    somma += mat1.data[i][k]*mat2.data[k][j];
                }
                printf("%d ", somma);

            }
            printf("\n");
            
        }

    } 
    


}


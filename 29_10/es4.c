#include <stdio.h>
#define DIM 3

void popola(int *, int);
void rimuovi_dupl(int *, int *);
void stampaArray(int arr[], int dim);
void intersezione(int arr1[], int arr2[], int *arr3, int dim1, int dim2, int *dim3);
int isContained(int[], int, int);

void popola(int *arr, int dim){
    int i;
    for(i=0; i<dim; i++)
        scanf("%d", arr+i);

}

void rimuovi_dupl(int *arr, int *dim){
    int cifre[10], new_arr[*dim], *p, i;
    for(i=0; i<10; i++)
        cifre[i] = 0;

    for(i=0, p=arr; p<(arr+*dim); p++){
        if(!isContained(new_arr, i, *p)){
            new_arr[i] = *p;
            i++;
        }
    }

    *dim = i;

    for(i=0; i<*dim; i++)
        *(arr+i) = new_arr[i];
    
};

void intersezione(int arr1[], int arr2[], int *arr3, int dim1, int dim2, int *dim3){
    int minDim = dim1, *p, i, flag = 0;
    if(dim2<dim1)
        minDim = dim2;
    
    for(i=0, p=arr3; i<minDim && !flag; i++){
        if(arr1[i]==arr2[i]){
            *p=arr1[i];
            p++;
        }
        else{
            if(p != arr3)
                flag = 1;
        }
    }
    *dim3 = p - arr3;
    
}

void stampaArray(int arr[], int dim){
    for(int i=0; i<dim; i++)
        printf("%d-", arr[i]);
    printf("\n");
}
int isContained(int arr[], int dim, int element){
    int flag = 0;
    for(int i=0; i<dim && !flag; i++){
        if(arr[i] == element)
            flag = 1;
    }
    return flag;
}
int main(){
    int arr1[DIM], arr2[DIM], arr3[DIM], inters[DIM];
    int l1 = DIM, l2 = DIM, l3 = DIM, l4 = DIM;
    popola(arr1, l1);
    popola(arr2, l2);
    popola(arr3, l3);
    rimuovi_dupl(arr1, &l1);
    rimuovi_dupl(arr2, &l2);
    rimuovi_dupl(arr3, &l3);
    stampaArray(arr1, l1);
    stampaArray(arr2, l2);
    stampaArray(arr3, l3);
    intersezione(arr1, arr2, inters, l1, l2, &l4);
    stampaArray(inters, l4);

    intersezione(inters, arr3, inters, l4, l3, &l4);
    stampaArray(inters, l4);

    return 0;

}
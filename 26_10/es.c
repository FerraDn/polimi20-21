#include <stdio.h>

void cerchio(float r, float *a, float *p);

int main(){
    float raggio, area, perimetro;
    int continua;

    do{
        scanf("%d", &raggio);
        cerchio(raggio, &area, &perimetro);
        printf("r: %f -> a: %f, p: %f\n", raggio, area, perimetro);
        
    }
    while(!continua);
}

// noi passiamo per indirizzo solo le variabili di cui ne vogliamo cambiarte il contenuto
void cerchio(float r, float *a, float *p){
    *a = r*r*PI;
    *p = 2*r*PI;
}
#include <stdio.h>
#define CARNAMESIZE 30
#define PLATESIZE 7
#define PERSONALINFOSIZE 30
#define MAXCARSNUMBER 50
#define DEALERSNUMBER 1

typedef struct {
    char name[PERSONALINFOSIZE];
    char surname[PERSONALINFOSIZE];
    char iva[PERSONALINFOSIZE];
} manager_t;

typedef struct {
    char model[CARNAMESIZE];
    char plate[PLATESIZE];
    int month;
    int year;
} car_t;

typedef struct {
    int code;
    int cars_number;
    car_t cars[MAXCARSNUMBER];
    manager_t manager;

} dealer_t;



void printCarsFromYear(dealer_t *d, int dim, int year);

void printCarsFromYear(dealer_t *d, int dim, int year)
{
    int i, j, flag;
    for(i=0; i<dim; i++){
        d += i;
        printf("Conc. %d, codice %d: gestore %s %s\n", i, d->code, d->manager.name, d->manager.surname);
        printf("Immatricolazioni %d: \n", year);
        flag = 0;
        for(j = 0; j < (*d).cars_number; j++){
            if(d->cars[j].year == year){
                printf("* mese %d: %s, %s\n", (*d).cars[j].month, (*d).cars[j].model, (*d).cars[j].plate);
                if(!flag)
                    flag = 1;
            }
            
        }
        if(!flag){
            printf("NESSUNA\n");
        }
            
    }
}

/*
void initializeInfo(dealer_t *d){
    int i, j;
    for(i = 0; i<DEALERSNUMBER; i++){
        d += i;
        d.code = 0;
        scanf("%d", d.code);
        scanf("%s %s %s", d.manager.name, &dealers[i].manager.surname, &dealers[i].manager.iva);
    }
}
*/

int main(){
    
    int i, j, year;
    dealer_t dealers[10];
    for(i=0; i<DEALERSNUMBER; i++){
        scanf("%d", &dealers[i].code);
        scanf("%s %s %s", dealers[i].manager.name, dealers[i].manager.surname, dealers[i].manager.iva);
        scanf("%d", &dealers[i].cars_number);
        for(j=0; j<dealers[i].cars_number; j++){
            printf("Auto n.%d\n", j);
            scanf("%s %s", dealers[i].cars[j].model, dealers[i].cars[j].plate);
            scanf("%d %d", &dealers[i].cars[j].month, &dealers[i].cars[j].year);
        }
    }
    printf("Per che anno cercare: ");
    scanf("%d", &year);
    printCarsFromYear(dealers, DEALERSNUMBER, year);

    return 0;
}
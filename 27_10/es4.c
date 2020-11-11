#include <stdio.h>
#define MAXRIL 100
typedef struct {
    int piano;
    char ora[8];
    int temp;

} rilevamento_t;

int main(){
    int dim, i, piano, counting=0;
    rilevamento_t ril[MAXRIL];
    scanf("%d", &dim);
    while(dim > MAXRIL){
        printf("Inserire numero minore o uguale 1 100: ");
        scanf("%d", &dim);
    }
    for(i=0; i<dim; i++){
        printf("> %d\n", i);
        scanf("%d", &ril[i].piano);
        scanf("%s", &ril[i].ora);
        scanf("%d", &ril[i].temp);
    }
    scanf("%d", &piano);
    for(i=0; i<dim; i++){
        if(ril[i].piano == piano){
            if(ril[i].temp < 22){
                if(!counting || i == (dim-1)){
                    counting = 1;
                    printf("%s", ril[i].ora);

                }
                
            }
            else
            {
                if(counting){
                    printf("-> %s",ril[i-1].ora);
                    counting = 0;
                }
            }
        }
    }



    
    return 0;
}
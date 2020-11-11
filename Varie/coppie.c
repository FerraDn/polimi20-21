#include <stdio.h>

int main(){

    int old, new, swap;
    scanf("%d", &new);
    old = new;
    while(new != 0){
        if(new == 2*old){
            printf("%d - %d\n", old, new);
        }
        old = new;
        scanf("%d", &new);
    }
    return 0;
}
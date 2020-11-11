// Sono dichiarazioni globali
#include <stdio.h>
#define SEC_IN_MIN 60

int main(){
    int m, s;
    scanf("%d%d", &m, &s);
    m = m + s/SEC_IN_MIN;
    s = s % SEC_IN_MIN;
    printf("%d minuti e %d secondi", m, s);
    return 0;
}
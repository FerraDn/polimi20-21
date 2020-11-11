#include <stdio.h>

float max_n(float a, float b);

int main(){
    float a, b, c, max;
    scanf("%f %f %f", &a, &b, &c);
    max = max_n(a, b);
    printf("Max: %f", max);
    max = max_n(max, c);
    printf("Max: %f", max);
    return 0;
}

float max_n(float a, float b){
    int max = a;
    if(b>max)
        max = b;
    return max;
}
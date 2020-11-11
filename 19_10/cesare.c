#include <stdio.h>

#define MAX_L 20
#define SHIFT 3

char cifra(char);
char decifra(char);
int verificalettera(char);

int main(){
    char input[MAX_L+1], output[MAX_L+1];
    int i;
    scanf("%s", input);
    for(i = 0; input[i] != '\0'; i++){
        if(verificalettera(input[i])){
            output[i] = cifra(input[i]);
        }
        else
        {

            output[i] = input[i];

        }
    }
    printf("%s", output);
    /*
    for(i = 0; [i] != "\0"; i++){
        if(verificalettera(input[i])){
            output[i] = cifra(input[i]);
        }
        else
        {
            output = input[i];
        }
    }
*/    
}

char cifra(char c){
    char new_c;
    new_c = c+ SHIFT;
    if(new_c >= 'z'){
        new_c = new_c - 'z' + 'a';
    }
    return new_c;
}

char decifra(char c){
    char new_c;
    new_c = c- SHIFT;
    if(new_c <= 'a'){
        new_c = 'z'-'a'-new_c;
    }
    return new_c;
}

int verificalettera(char c){
    if(c >= 'a' && c<= 'z')
        return 1;
    else
        return 0;
}
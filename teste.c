#include <stdio.h>

int main(){

    char vetor[2] = "8b";

    char *p = &vetor[0];    
    p[2] = 'c';

    printf("%c", p[2]);
    
    return 0;


}
#include <stdio.h>
#include <ctype.h>

int main(){
    int ch , counter = 0;
    while ((ch= getchar()) != '\n'){
        if (isalpha(ch)){
            counter++;
        }
    }
    printf("A frase contem %d letras", counter);
    return 0;
}

//Como se faz input para isto?
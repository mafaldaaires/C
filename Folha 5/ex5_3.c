#include <stdio.h>

int comprimento(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

int palindromo(char str[]){
    int comp = comprimento(str);
    int i = 0;
    while (comp > 0){
        if (str[i] != str[comp-1]){
            return 0;
        }
        i++;
        comp--;
    }
    return 1;
}
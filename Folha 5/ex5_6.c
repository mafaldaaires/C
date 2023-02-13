#include <ctype.h>

int comprimento(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

int criteriosValidados(char str[]){
    unsigned i = 0, a = 0, b = 0, c = 0;
    while (str[i] != '\0'){
        if (islower(str[i])){
            a = 1;
        }
        else if (isupper(str[i])){
            b = 1;
        }
        else if (isdigit(str[i])){
            c = 1;
        }
        if (a == 1 && b == 1 && c == 1){
            return 1;
        }
        i++;
    }
    return 0;
}

int forte(char str[]){
    unsigned comp = comprimento(str);
    if(comp >= 6 && criteriosValidados(str)){
        return 1;
    }
    return 0;
}
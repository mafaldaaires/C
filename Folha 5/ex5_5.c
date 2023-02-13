#include <ctype.h>

int algum_digito(char str[]){
    unsigned i = 0;
    while (str[i] != '\0'){
        if (isdigit(str[i])){
            return 1;
        }
        i++;
    }
    return 0;
}
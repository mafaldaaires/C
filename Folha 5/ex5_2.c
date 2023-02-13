#include <ctype.h>

void capitalizar(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        if (isalpha(str[i])){
            str[i] = toupper(str[i]);
        }
        i++;
    }
}
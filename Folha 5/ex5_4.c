#include <ctype.h>

int todos_letras(char str[]){
    unsigned i = 0;
    while (str[i] != '\0'){
        if (!isalpha(str[i])){
            return 0;
        }
        i++;
    }
    return 1;
}
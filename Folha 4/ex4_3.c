#include <stdio.h>
#include <ctype.h>

int main(){
    int ch1 = getchar(), ch2 = getchar(), palavras = 0;
    while (ch2 != EOF){
        if ((ch1 != ' ' && ch1 != '\t' && ch1 != '\n') && (ch2 == ' ' || ch2 == '\t' || ch2 == '\n')){
            palavras++;
        }
        ch1 = ch2;
        ch2 = getchar();
    }
    printf("%d", palavras);
    return 0;
}

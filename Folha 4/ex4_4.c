#include <stdio.h>
#include <ctype.h>

int points(int ch){
    switch (ch){
        case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'T': case 'S': case 'U':
            return 1;
        case 'D': case 'G':
            return 2;
        case 'B': case 'C': case 'M': case 'P':
            return 3;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            return 4;
        case 'K':
            return 5;
        case 'J': case 'X':
            return 8;
        case 'Q': case 'Z':
            return 10;
        default:
            return 0;
    }
}

int scrabble(){
    int ch = getchar(), pontos = 0;
    while (ch != EOF){
        ch = toupper(ch);
        pontos += points(ch);
        ch = getchar();
    }    
    return pontos;
}
//Como se faz input para isto?
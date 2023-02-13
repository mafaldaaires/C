#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));
    int numPerguntas = 10, respCorretas = 0;
    while (numPerguntas != 0){
        int a = (int)(rand()%9 +1);
        int b = (int)(rand()%9 +1);
        int c = a*b;
        int r;
        printf("Quanto é %d x %d? ", a, b); scanf("%d", &r);
        if (r == c){
            printf("Certo!\n");
            respCorretas++;
        }
        else{
            printf("Errado! O resultado é %d\n", c);
        }
        numPerguntas--;
    }
    printf("\nNumero de respostas certas: %d\nNumero de respostas erradas: %d\n", respCorretas, 10-respCorretas);
    return 0;
}

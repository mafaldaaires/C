#include <stdio.h>
#define SIZE 5

void construir_magico(){
    int square[SIZE][SIZE] = {0};
    int i = 0, j = SIZE/2;
    int di = -1, dj = 1; //coordenadas do vetor (1,-1)

    square[0][SIZE/2] = 1;
    
    for (int num = 2; num <= SIZE*SIZE; num++){
        if (i+di == -1){ //se esta na borda de cima
            i = SIZE-1;
        }
        else{
            i += di;
        }

        if (j+dj == SIZE){ //se esta na borda da direita
            j = 0;
        }
        else{
            j += dj;
        }

        if (square[i][j] != 0){
            if (i == SIZE-1 && j == 0){
                //desfazer movimento
                i = 0;
                j = SIZE-1;
            }
            else if (i == SIZE-1){
                //desfazer movimento
                i = 0;
            }
            else if (j == 0){
                //desfazer movimento
                j = SIZE-1;
            }
            else{ //qualquer outro quadrado
                //desfazer movimento
                i -= di;
                j -= dj;
            }
            //quadrado abaixo
            i++;
        }
        square[i][j] = num;
    }
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
}

void main(){
    construir_magico();
}
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TRIES 500000
#define ALUNOS 30 //segundo estatisticas, para um numero de pessoas > 60 a probabilidade aproxima-se de 1

int repetidos(int vec[], unsigned size){
    for (int i = 0; i < size; i++){
        int val = vec[i];
        for (int j = i+1; j < size; j++){
            if (vec[j] == val){
                return 1;
            }
        }
    }
    return 0;
}

float prob_same_bday(){
    int bdays[ALUNOS] = {0};
    float counter = 0.0;
    srand((unsigned)time(NULL));
    for (int j = 0; j < TRIES; j++){
        for (int i = 0; i < ALUNOS; i++){
        bdays[i] = rand()%364 +1;
        }
        
        if (repetidos(bdays, ALUNOS)){
            counter++;
        }
    }
    float prob = counter/TRIES;
    return prob;
}
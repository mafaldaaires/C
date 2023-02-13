#include <stdio.h>
#include <stdlib.h>

int f1(){
    return (int)((double)rand() / ((double)RAND_MAX+1)*10); 
    // vezes 10 pois vezes 9 vai de [0,9[
}

int f2(){
    return 1+(int)((double)rand() / ((double)RAND_MAX+1)*10);
}

int f3(){
    return 1+(int)((double)rand() / ((double)RAND_MAX+1)*100);
}

int f4(){
    return (int)((double)rand() / ((double)RAND_MAX+1)*21) - 10;
}

double f5(){
    return (double)rand() / ((double)RAND_MAX+1);
}

double f6(){
    return (2*(double)rand() / ((double)RAND_MAX+1)) - 1;
}

int f7(){
    return (int)(2*(rand()%46 + 5));
    //rand()%46 dá os numeros de 0 até 45 inclusive, +5 passa para 5 até 50, *2 dá todos os numeros pares de 10 a 100
}

int f8(){
    return (int)(2*(rand()%50) +1);
    //rand()%50 dá os numeros de 0 até 49 inclusive, *2 passar para os numeros pares de 0 até 98, +1 fica 1 até 99 e apenas numeros impares
}
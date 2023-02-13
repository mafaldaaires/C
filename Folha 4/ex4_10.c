#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TRIES 500000.0

double distr_gauss(double x){
    srand((unsigned)time(NULL));
    int counter = 0;
    for (int i=0; i < TRIES; i++){
        double xG = ((double)rand() / ((double)RAND_MAX+1)*2*sqrt(3.0)) - sqrt(3.0);
        printf("%lf\n", xG);
        if (xG <= x){
            counter++;
        }
    }
    double prob = counter/TRIES;
    return prob;
}

int main(){
    double x;
    scanf("%lf", &x);
    double prob = distr_gauss(x);
    printf("%lf", prob);
    return 0;
}

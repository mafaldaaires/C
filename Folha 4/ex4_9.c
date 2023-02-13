#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TRIES 500000.0

double distr_unif(double x, double a, double b){
    srand((unsigned)time(NULL));
    int counter = 0;
    for (int i = 0; i < TRIES; i++){
        double xU = a + ((double)rand() / ((double)RAND_MAX+1)*(b-a));
        printf("%lf", xU);
        if (xU <= x){
            counter++;
        }
    }
    double prob = ((double)counter)/TRIES;
    return prob;
}

int main(){
    double x, a, b, prob;
    scanf("%lf %lf %lf", &x, &a, &b);
    prob = distr_unif(x, a, b);
    printf("%lf", prob);
    return 0;
}

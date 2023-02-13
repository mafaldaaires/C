#include <stdio.h>

double squareRoot(double a, double epsilon){
    double term = a/2;
    double nextTerm = (1.0/2.0)*(term + a/term);
    while (nextTerm-term >= epsilon || nextTerm-term <= -1*epsilon){
        term = nextTerm;
        nextTerm = (1.0/2.0)*(term + a/term);
    }
    return term;
}


int main(){
    float a, epsilon, result;
    scanf("%f %f", &a, &epsilon);
    result = squareRoot(a, epsilon);
    printf("%f\n", result);
    return 0;
}

//não funciona não sei porquê...

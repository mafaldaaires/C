#include <stdio.h>

double serie_log(double x, int n){
    double term = x, soma = x;
    for (double i = 2.0; i <= n; i++){
        term *= (-1.0)*((double)(i-1)/i)*x;
        soma += term;
    }
    return soma;
}

int main(){
    double x;
    int n;
    scanf("%f %d", &x, &n);
    double log = serie_log(x, n);
    printf("%f\n", log);
    return 0;
}

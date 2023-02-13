//3.1
#include <stdio.h>

int main() {
    float x;
    int expressao = 0;
    printf("Valor: "); scanf("%f", &x);

    expressao = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

    printf("Resultado: %d\n", expressao);
}

//3.2
//Metodo de Horner
#include <stdio.h>

int main() {
    float x;
    int expressão = 0;
    printf("Valor: "); scanf("%f", &x);

    expressão = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("Resultado: %d\n", expressão);
}

//3.3
// Com operadores logicos, usa os valores logicos dos valores (0 ou 1)
// Com operadores equacionais (=, !=, <, >) usa os valores dados da variavel (p.e. i=2)
1. !i = 0, j = 1 => output:1
2. !!i = 1, !j = 0 => output:1
3. 1 && 0 = 0; 0 || 1 = 1 => output:1
4. 1 < 1 = 0; 0 || 1 = 1 => output:1
5. 1 => output: 1, 3, 4, 5
// primeira instrução (i < j) é verdadeira(1), logo nao faz o resto da || e ++j não se aplica, pelo que o valor de j permanece inalterado
6. 0 => output: 0, 7, 8, 9
//primeira instrução (i - 7) é falsa(0), logo nao faz o resto da && e j++ não se aplica, logo o valor de j permanece inalterado

Verifica a 5 e 6:
#include <stdio.h>

int main(){
    int i,j,k;
    i=3; j=4; k=5;
    printf("\n%d\n", i<j || ++j < k); 
    printf("%d %d %d\n", i,j,k);

    i=7; j=8; k=9;
    printf("\n%d\n", i-7 && j++ < k); //como i-7 é falso não faz o resto da && e j++ não é aplicado, pelo que não altera j
    printf("%d %d %d", i,j,k);
}

//3.4
1.
#include <stdio.h>

int main(){
    int n;
    printf("Valor de n: "); scanf("%d", &n);
    if (n >= 1 && n <= 10) {
        printf("n entre 1 e 10\n");
    }
}

2.
#include <stdio.h>

int main(){
    int i;
    printf("Valor de i: "); scanf("%d", &i);
    if (i == 2 || i == 3) {
        printf("i igual a 2 ou 3\n");
    }
}

3.
#include <stdio.h>

int main(){
    int i, j, k;
    printf("Valor de i: "); scanf("%d", &i);
    printf("Valor de j: "); scanf("%d", &j);
    printf("Valor de k: "); scanf("%d", &k);

    if (i == j && j == k) {
        printf("i,j,k iguais\n");
    }
}

4.
#include <stdio.h>

int main(){
    int i, j, k;
    printf("Valor de i: "); scanf("%d", &i);
    printf("Valor de j: "); scanf("%d", &j);
    printf("Valor de k: "); scanf("%d", &k);

    if (i != (j && k)) {
        printf("i diferente j e k\n");
    }
}

//3.5
// Nao da porque admite n como divisor de si proprio

#include <stdio.h>
int soma_divisores(int n) {
    int soma = 1, i = 1;

    while (i < n) {
        i ++;
        if (n % i == 0) { 
            soma += i;
        }
    }
    return soma;
}

int main(){
    int x;
    scanf("%d", &x);
    printf("Soma dos divisores: %d\n", soma_divisores(x));
}

//3.5 correto
#include <stdio.h>
int soma_divisores(int n) {
    int soma = 0;
    for (int i = 1; i <= n/2; i++){
        if (n%i == 0){
            soma += i;
        }
    }
    return soma;
}

int main(){
    int x;
    scanf("%d", &x);
    printf("Soma dos divisores: %d\n", soma_divisores(x));
}

//3.6
#include <stdio.h>

int mdc(a, b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else if (a < b)
            b = b - a;
    }
    return a;
}

int main() {
    int num, denom, num1, denom1;
    printf("Numerador: "); scanf("%d", &num);
    printf("Denominador: "); scanf("%d", &denom);

    num1 = num / mdc(num, denom);
    
    denom1 = denom / mdc(num, denom);

    printf("A fração %d/%d é equivalente a %d/%d\n", num, denom, num1, denom1);
}

//3.7
#include <stdio.h>

int primo(int n) {
    int d;
    if (n <= 1) 
        return 0;
    for (d = 2; d < n-1; d++) {  
// ou for (d=2;d*d < n; d++), porque se existe um divisor maior que sqrt(n), tambem existe um divisor menor que sqrt(n)
        if (n % d == 0)
            return 0;
        else
            return 1;
    }
    return 1;
}

int main() {
    int a;
    printf("Limite superior? "); scanf("%d", &a);

    for (int b = 2; b < a-1; b++) {
        if (primo(b) == 1) {
            printf("%d \n", b);
        }
    }
}

//3.8
#include <stdio.h>

int quadrado(int n) {
    int soma = 0;
    for(int i = 1; i <= n; i += 2){
        soma += i;
        if (soma == n) {  //verifica se o n e quadrado perfeito
            return 1;
        }
    }
    return 0;
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", quadrado(x));
}

//3.9
#include <stdio.h>
int mdc(int a, int b) {
    int n = 1;
    while (a != b) {
        if (a > b)
            a = a - b;
        else if (a < b)
            b = b - a;
        n += 1;
    }
    return n;
    printf("%d iteracoes\n", n);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", mdc(x,y));
}

//3.10
1. short (365)
2. short (24*365 = 8760)
3. int (24*3600 = 86400)
4. int (86400*31 = 2678400)
5. long 

//3.11
#include <stdio.h>
int fibonacci (int n){
    int j=0;
    if (n == 0){
        j = 0;
    }
    else if (n == 1){
        j = 1;
    }
    else if (n > 1){
        j = fibonacci(n-1) + fibonacci(n-2);
    }
    return j;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
}

//3.12
#include <stdio.h>
int soma_digitos(int n){
    int soma = 0;
    while (n != 0){
        soma += (n%10);
        n = (n/10);
    }
    return soma;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", soma_digitos(n));
}
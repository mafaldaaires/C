//2.1
#include <stdio.h>
#define pi 3.14
int main () {
    float raio, volume;
    printf("Raio: "); scanf ("%f", &raio);
    volume = 4.0/3 * pi * (raio * raio * raio);
    printf("Volume da esfera: %f\n", volume);
}

//2.2
#include <stdio.h>
int main(void) {
    int a, b, c, maior;
    scanf ("%d %d %d", &a, &b, &c);

    if (a > b) 
        if (b > c) 
            maior = a;
        else
            maior = c;
    else
        if (b > c)
            maior = b;
        else
            maior = c;

    printf ("%d\n", maior);
}

//2.3
#include <stdio.h>
int main() {
    int euros, vinte=0, dez=0, cinco=0, um=0;
    printf("Quantia em Eur? ");scanf ("%d", & euros);

    vinte = euros / 20;
    dez = (euros % 20) / 10; 
    cinco = ((euros %  20) % 10) / 5;
    um = (((euros %  20) % 10) % 5) / 1;
    
    printf ("notas EUR 20: %d\n", vinte);
    printf ("notas EUR 10: %d\n", dez);
    printf ("notas EUR 5: %d\n", cinco);
    printf ("notas EUR 1: %d\n", um);
}


//2.3
//Escreva um programa que lê 3 valores inteiros da entrada-padrão e escreva a mediana, isto é, o valor no meio quando os colocamos por ordem crescente. 
//Assim, se os valores forem a, b, c com a ≤ b ≤ c, então a mediana será b.

#include <stdio.h>
int main() {
    int a, b, c, mediana;
    printf ("Primeiro valor: "); scanf("%d", &a);
    printf ("Segundo valor: "); scanf("%d", &b);
    printf ("Terceiro valor: "); scanf("%d", &c);

    if (a > b) 
        if (b > c)
            mediana = b;
        else // c > b
            if (a > c)
                mediana = c;
            else
                mediana = a;
    else //b > a
        if (a > c)
            mediana = a;
        else // c > a
            if (b > c)
                mediana = c;
            else
                mediana = b;

    printf("Mediana: %d\n", mediana);
}

//2.4
#include <stdio.h>
int mediana(int a, int b, int c) {
    int meio = 0;
    if (a > b) 
        if (b > c)
            meio = b;
        else
            if (a > c)
                meio = c;
            else
                meio = a;
    else if (b > a)
        if (a > c)
            meio = a;
        else 
            if (b > c)
                meio = c;
            else
                meio = b;
    
    else if ((a == c) && (b == c) && (a == b))
        meio = a;

    return meio;
}

//2.5
#include <stdio.h>

int potencia (int x, int n) { 
    int potencia1 = 1;
    if (n > 0) {
        while (n != 0) {
            potencia1 = potencia1*x;
            n -= 1;
        }
    }
    else if (n == 0) {
        potencia1 = 1;
    }
    
    return potencia1;
}

// Não é necessario escrever a main, mas para testar no terminal sim
int main(){
    int x, n; scanf("%d %d", &x, &n);
    printf("%d",potencia(x,n));
}

//2.6
#include <stdio.h>
int main() {
    float numero, soma = 0, indice = 0;
    printf("numero: "); scanf("%f", &numero);
    soma = numero;
    indice = 1;

    while (numero != 0) {
        printf("numero: "); scanf("%f", &numero);
        soma += numero;
        indice += 1;

        if (numero == 0) {
            indice -= 1;      //no terminal, contabiliza o indíce do numero 0
        }
    }
    printf("Media: %f\n", (soma/indice)); 
}

//2.7 -- nao consigo???
#include <stdio.h>
int main() {
    int a;
    printf("Numero inteiro: "); scanf("%d",&a);
    printf("%d", a);
    int i = 2;
    while (a != 1){
        if (a % 2 == 0){
            a = a / i;
            printf("%d", i);
        }
        else
            i++;
    }

    
//2.8
#include <stdio.h>

int bissexto(int n) {
    int x;

    if (x % 4 == 0 && x % 100 == 0 && x % 400 != 0 {
        return 0;
    }
    else if (x%4 == 0 && x % 100 != 0) {
        return 1;
    }
    else {
        return 0;
    }

//2.9
#include <stdio.h>
int bissexto(int n) {
    int x;

    if (x % 4 == 0 && x % 100 == 0 && x % 400 != 0 {
        return 0;
    }
    else if (x%4 == 0 && x % 100 != 0) {
        return 1;
    }
    else {
        return 0;
    }

int prox_bissexto(int n) {
    int n;
    if (bissexto(n)) {
        return n;
    }
    else {
        while (!bissexto(n)){
            n++;
        }
        return n;
    }
}

//2.10
#include <stdio.h>
int bissexto(int n){
    int x; 
    scanf("%d", &x);
    if (x % 4 == 0 && x % 100 == 0 && x % 400 != 0){
        return 0;
    }
    else if (x % 4 == 0 && x % 100 != 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int dia, mes, ano;
    printf("Dia: ");scanf("%d", &dia);
    printf("Mes: ");scanf("%d", &mes);
    printf("Ano: ");scanf("%d", &ano);

    if (bissexto(ano)){
        if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 9) || (mes == 11)){
            if (dia < 31){
                dia = dia + 1;
                printf("%d %d %d", dia, mes, ano);
            }
            else if (dia == 31){
                dia = 1;
                mes += 1;
                printf("%d %d %d", dia, mes, ano);
            }
        }
        else if ((mes == 4) || (mes == 6) || (mes == 8) || (mes == 10) || (mes == 12)){
            if (dia < 30){
                dia = dia + 1;
                printf("%d %d %d", dia, mes, ano);
            }
            else if (dia == 30){
                if(mes != 12){
                    dia = 1;
                    mes += 1;
                    printf("%d %d %d", dia, mes, ano);
                }
                else if (mes == 12){
                    dia = 1;
                    mes = 1;
                    ano += 1;
                    printf("%d %d %d", dia, mes, ano);
                }
            }
        }
        else if (mes == 2){
            if (dia < 29){
                dia = dia + 1;
                printf("%d %d %d", dia, mes, ano);
            }
            else if (dia == 29){
                dia = 1;
                mes = 3;
                printf("%d %d %d", dia, mes, ano); 
            }
        }
    }
    if (!bissexto(ano)){
        if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 9) || (mes == 11)){
            if (dia < 31){
                dia = dia + 1;
                printf("%d %d %d", dia, mes, ano);
            }
            else if (dia == 31){
                dia = 1;
                mes += 1;
                printf("%d %d %d\n", dia, mes, ano);
            }
        }
        else if ((mes == 4) || (mes == 6) || (mes == 8) || (mes == 10) || (mes == 12)){
            if (dia < 30){
                dia = dia + 1;
                printf("%d %d %d", dia, mes, ano);
            }
            else if (dia == 30){
                if(mes != 12){
                    dia = 1;
                    mes += 1;
                    printf("%d %d %d", dia, mes, ano);
                }
                else if (mes == 12){
                    dia = 1;
                    mes = 1;
                    ano += 1;
                    printf("%d %d %d", dia, mes, ano);
                }
            }
        }
        else if (mes == 2){
            if (dia < 28){
                dia = dia + 1;
                printf("%d %d %d", dia, mes, ano);
            }
            else if (dia == 28){
                dia = 1;
                mes = 3;
                printf("%d %d %d", dia, mes, ano); 
            }
        }
    }
}
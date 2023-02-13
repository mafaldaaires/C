//9.1
1. Tem que se usar chavetas { }
2. Nao se usa o 2o double (ou entao ponho: double x; double y) e falta uma ; (semicolon) a seguir ao y 
3. Falta uma ; (semicolon) no fim e falta uma ; (semicolon) a seguir ao y 
4. Falta uma ; (semicolon) 

//9.2
1. Falta a ; (semicolon) a seguir ao y
2. Falta struct a seguir a typedef (antes das chavetas) => declarar que e uma struct
3. Falta o nome alternativo para a struct (entre as chavetas e o ultimo ; (semicolon))

//9.3
1.
typedef struct ponto{
   double x, y;
} Ponto;

double distancia(Ponto a, Ponto b){
    double dist = sqrt((Ponto.b.x - Ponto.a.x)*(Ponto.b.x - Ponto.a.x)) + ((Ponto.b.y - Ponto.a.y)*(Ponto.b.y - Ponto.a.y));
    return dist;
}

2.
int mesmo_ponto(Ponto a, Ponto b){
    if (distancia(Ponto.a, Ponto.b) < 0.000001)
        return 1;
    else
        return 0;
}

3.
void maior_dist(){
    Ponto listaPontos[10];
    //Criacao da lista
    for(int i = 0; i < 10; i++){
        Ponto pt;  //declaracao da variavel pt do tipo Ponto
        scanf("%lf %lf", &pt.x, &pt.y); //Imprime as coordenadas de pt
        listaPontos[i] = pt;
    }
    //Calcular a maior distancia entre dois pontos
    Ponto pt1, pt2;  //declaracao da variavel pt1 e pt2 (vai representar os pontos com maior distancia entre si)
    double maiorDist = 0.0;
    //Dois pontos faz com que seja necessario percorrer a lista duas vezes (uma para encontrar o ponto pt1 e outra para encontrar o ponto pt2) 
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if (maiorDist < distancia(listaPontos[i],listaPontos[j])){
                maiorDist = distancia(listaPontos[i],listaPontos[j]);
                pt1 = listaPontos[i];
                pt2 = listaPontos[j];
            }
        }
    }
    printf("Ponto 1: (%lf,%lf)\nPonto2: (%lf,%lf)\n", pt1.x, pt1.y, pt2.x, pt2.y);
}

4.
typedef struct{
    Ponto infesq, supdir;
} Rect;

5.
//Tinha de definir a altura e comprimento a parte?
double rect_area(Rect r){
    double area = (r.supdir.x - r.infesq.x) * (r.supdir.y - r.infesq.y);
}

6.
int ponto_dentro(Rect r, Ponto p){
    if ((r.infesq.x <= Ponto.p.x) && (Ponto.p.x <= r.supdir.x)) && ((r.infesq.y <= Ponto.p.y) && (Ponto.p.y <= r.supdir.y))
        return 1;
    return 0;
}

7.
int rect_dentro(Rect r1, Rect r2){
    if (ponto_dentro(r1,r2.infesq) && ponto(r1,r2.supdir))
        return 1;
    return 0;
}

//9.4
1.
//Nao percebi
typedef struct data{
    int dia, mes, ano;
} Data;

int valor(Data d){
    int value = d.dia + d.mes*100 + d.ano*10000;
    return value;
}

int comparar(Data d1, Data d2){
    if ((Data.d1.dia == Data.dia.d2) && (Data.d1.mes == Data.d2.mes) && (Data.d1.ano == Data.d2.ano))
        return 0;
    else if ((Data.d1.dia < Data.dia.d2) && (Data.d1.mes <= Data.d2.mes) && (Data.d1.ano <= Data.d2.ano))
        return -1;
    else if ((Data.d1.dia > Data.dia.d2) && (Data.d1.mes >= Data.d2.mes) && (Data.d1.ano >= Data.d2.ano))
        return 1;
}

2.
//Posso fazer assim?
Data diff(Data d1, Data d2){
    if (d1.dia != d2.dia){
        int dia = (d1.dia - d2.dia);
        if (dia < 0)
            dia *= -1;
    }
    else 
        int dia = 0;

    if (d1.mes != d2.mes){
        int mes = (d1.mes - d2.mes);
        if (mes < 0)
            mes *= -1;
    }
    else 
        int mes = 0;

    if (d1.ano != d2.ano){
        int ano = (d1.ano - d2.ano);
        if (ano < 0)
            ano *= -1;
    }
    else 
        int ano = 0;
    
    Data diferenca = {dias,meses,anos};
    return diferenca;
}

//9.5
#include <stdio.h>

typedef struct{
    int dia, mes, ano;
} Data;

//alinea 1
int valor(Data d) {
    int value = d.dia + d.mes*100 + d.ano*10000;
    return value;
}

void ordena_datas(Data vec_datas[], int size){ //insertion sort
    int i, j;
    for (i = 1; i < size; i++){
        Data x  = vec_datas[i];
        j = i-1;
        while(j >= 0 && valor(vec_datas[j]) > valor(x)){
            vec_datas[j+1] = vec_datas[j];
            j--;
        }
        vec_datas[j+1] = x;
    }
}

//alinea 2
Data menor_data(Data vec_datas[], int size){
    ordena_datas(vec_datas, size);
    return vec_datas[0];
}

//alinea 3
void datas_ano(Data vec_datas[], int size, int ano){
    ordena_datas(vec_datas, size);
    for (int i = 0; i < size; i++){
        if (vec_datas[i].ano == ano) printf("%d/%d/%d\n", vec_datas[i].dia, vec_datas[i].mes, vec_datas[i].ano);
    }
}

//main
void main(){
    //as datas serao passadas como por exemplo 03072022
    Data listaDatas[10] = {0};
    Data d;
    int n; scanf("%d", &n); //Data introduzida
    int i = 0;
    int size = 0;
    while (n != -1){
        Data d = {n/1000000, (n/10000)%100, n%10000};
        listaDatas[i] = d;
        size++;
        i++;
        scanf("%d", &n);
    }
    
    //alinea 1
    //ordena_datas(listaDatas, size);
    
    //alinea 2
    //d = menor_data(listaDatas, size);
    //printf("%d/%d/%d\n", d.dia, d.mes, d.ano);

    //alinea 3
    //datas_ano(listaDatas, size, 2003); por exemplo
}
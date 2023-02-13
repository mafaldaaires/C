//8.1
4: indica que i e o valor apontado por p
6: atribui o apontador q ao apontador p
9: modifica o valor apontado por q (passa a ser igual ao valor apontado por p)

//8.2
1: imprime i
3: le i
5: le o valor apontado por p (neste caso e i, porque *p = i)
6 e 7 (?)

//8.3
//Estao declarados
#include <stdio.h>
#include <stdlib.h>

void decompor(int total_seg, int *horas, int *mins, int *segs){
    *horas = total_seg/3600;
    *mins = (total_seg%3600)/60;
    *segs = (total_seg%3600)%60;
}

//8.4
void max_min(int vec[], int size, int *pmax, int *pmin){
//Admitimos que o max e o min sao o primeiro valor do vetor
    *pmax = vec[0];
    *pmin = vec[0];
//Depois comparamos com os restantes valores do vetor
    for(int i = 1; i < size; i++){
    //Se houver um valor maior que o primeiro valor => max = valor
        if (vec[i] > *pmax) 
            *pmax = vec[i];
    //Se houver um valor menor que o primeiro valor => min = valor
        else if (vec[i] < *pmin) 
            *pmin = vec[i];
    }
}

//8.5
#include <stdio.h>
#include <stdlib.h>
int mdc(a,b){
    while (a != b){
        else{
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
    }
    return a;
}

void reduzir(int *pnum, int *pdenom){
    int a = *pnum, b = *pdenom;
    int x = mdc(a,b);
    *pnum = *pnum/x;
    *pdenom = *pdenom/x;
}

//8.6
void store_zeros(int vec[], int n){
    int *zeros;
    for(zeros = &vec[0]; n > 0; n--){
        *zeros = 0;
        zeros++;
    }
}

//8.7
/**
unsigned contar_espacos(char str[])
{
  unsigned espacos = 0;
  for(int i=0; str[i]!='\0'; i++)
  {
     if(str[i] == ' ')
espacos ++; }
  return espacos;
}
**/

int contar_espacos(char *str){
    int espacos = 0;
    while(*str != '\0'){
        if (*str == ' ')
            espacos ++;
        str ++;     
    }
    return espacos;
}
//Substituimos str[] por str
//Conteudo de str[] == *str


//8.9
/**

int procurar(char str[], char ch)  {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if(str[i] == ch)
      return i; // encontrou
  }
  return -1;    // nao encontrou
}

**/

#include <stdlib.h>

char *procurar(char *str, char ch){
    while (*str != '\0'){
        if (*str == *ch)
            return str;
        str ++;
    }
    return NULL;
}

8.2, 8.5, 8.6 e (str++ na 8.9)
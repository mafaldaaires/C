#include <stdio.h>
#define SIZE 1000

void insert_sort_cres(int vec[], int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        int x = vec[i];
        j = i-1;
        while(j>=0 && vec[j] > x) {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = x;
    }
}

void main(){
    int vec[SIZE] = {0};
    int x, i = 0;
    scanf("%d", &x);
    //adicionar os numeros ao array
    while (x != 0){
        vec[i] = x;
        i++;
        scanf("%d", &x);
    }
    //ordenar o array
    insert_sort_cres(vec, SIZE);
    //dar print aos numeros
    for (int i = 0; i < SIZE; i++){
        if (vec[i] == 0){
            break;
        }
        printf("%d ", vec[i]);
    }
}

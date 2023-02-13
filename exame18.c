//1
#include <stdio.h>
#include <ctype.h>

char rodar_letra(char ch){
    if(ch == 'Z' || ch == 'z')
        ch = ch - 25;
    else
        ch ++;
    return ch;
}

int main(){
    char ch;
    scanf("%c",&ch);
    ch = rodar_letra(ch);
    printf("%c\n", ch);
}

//2
#include <stdio.h>

int primo(int n){
    if (n <= 1)
        return 0;
    for(int x = 2; x < n; x++){
        if (n%x == 0)
            return 0;
    }
    return 1;
}

int prox_primo(int n){
    int i = n + 1;
    while (primo(i) != 1){
        i++;
    }
    return i;
}

int main(){
    int x;
    scanf("%d", &x);
    int n = prox_primo(x);
    printf("%d\n", n);
    return 0;
}

//3
#include <stdio.h>
#include <ctype.h>

int montanhas(char str[]){
    int alt = 0, montanha = 0;
    for(int i = 0; str[i]!='\0'; i++){
        if (str[i] == 'S'){
            alt ++;
        }
        if (str[i] == 'D'){
            alt --;
            if(alt == 0) montanha++;
        }
    }
    return montanha;
}

int main(){
    char str[] = { };
    scanf("%s", str);
    printf("%d\n", montanhas(str));
}

//4
#include <stdio.h>

void bubblesort(int vec[], int n){
    int i;
    for(i=0; i < n-1; i++){
        int j;
        for(j=i+1; j<n; j++){
            if (vec[j]<vec[i]){
                int imin= vec[j];
                vec[j] = vec[i];
                vec[i] = imin;
            }
        }
    }
    for (int r = 0; r < n; r++){
        printf("%d ",vec[r]);
    }
    printf("\n");
}

int main(){
    int size;
    scanf("%d", &size);
    int vec[size];
    for(int  i = 0; i < size; i++){
        scanf("%d", &vec[i]);
    }
    bubblesort(vec, size);
}

//Questionario
1. a
2. b
3. b
4. b
5. a
6. b
7. a
8. b
9. a
10. b
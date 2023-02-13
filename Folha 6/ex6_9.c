#include <stdio.h>
#define N 5

int identidade(int mat[N][N]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i == j && mat[i][j] != 1){
                return 0;
            }
            if (i != j && mat[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;
}

void main(){
    int mat[N][N] = {{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};
    int r = identidade(mat);
    printf("%d",r);
}

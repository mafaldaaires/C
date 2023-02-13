/*
Considerando uma matriz:
a b c d ...
e f g h ...
i j k l ...
m n o p ...
. . . . .
. . . .  .
. . . .   .

A sub-matriz 3x3 é
a b c
e f g
h i j
*/

int magico(int a[20][20], int n){
    int soma = 0;
    //definir qual o valor que todas as linhas, colunas e diagonais devem somar
    for (int i = 0; i < n; i++){
        soma += a[i][0];
    }
    //verificar linha e coluna a linha e coluna (ao mesmo tempo)
    int sRow = 0, sCol = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            sRow += a[i][j];
            sCol += a[j][i];
        }
        if (sRow != soma || sCol != soma){
            return 0;
        }
        else{
            sRow = 0;
            sCol = 0;
        }
    }
    //verificar diagonais
    int sDiag1 = 0, sDiag2 = 0;
    for (int i = 0; i < n; i++){
        sDiag1 += a[i][i];
        sDiag2 += a[i][n-1-i];
    }
    if (sDiag1 != soma || sDiag2 != soma){
        return 0;
    }
    return 1;
}
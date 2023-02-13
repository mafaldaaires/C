//1.2
#include <stdio.h>
int main() {
    printf("Esta frase vai ser escrita!\n");
    printf("Esta frase vai ser escrita novamente...\n");
    return 0;
}

//1.3
#include <stdio.h>
int main(){
    int L, W, H, volume;
    printf("L= "); scanf ("%d", &L);
    printf("W= "); scanf ("%d", &W);
    printf("H= "); scanf ("%d", &H); 
    volume = L * W * H;
    printf("Volume = %d\n", volume);
}
//Nota: Para L=W=H=1500, o programa não calcula o valor correto.
//Isto deve-se ao tipo de variavel (int) ter um limite de representação (de -32.768 a 32.767)

//1.4
1. printf("%d %d %d\n", a, b, c);
2. printf("%d %d\n", x, y);
3. printf("%d %d %d\n", a, b, c);
4. scanf("%d", &a);
5. scanf("%d", &a);
6. scanf("%d", &a); 

//1.5 Nenhum, porque o valor de y está dependente do valor de x e não foi atribuído valor ao x.

//1.6
#include <stdio.h>
int main(){
    float L, W, H, volume;
    printf("L= "); scanf ("%f", &L);
    printf("W= "); scanf ("%f", &W);
    printf("H= "); scanf ("%f", &H); 
    volume = L * W * H;
    printf("Volume = %f\n", volume);
}
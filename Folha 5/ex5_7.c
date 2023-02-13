int decimal(char str[]){
    int num = 0, i = 0;
    while (str[i] != '\0'){
        int ascii = str[i];
        ascii -= 48; //passa o valor ascii do caracter para o valor inteiro do numero
        num *= 10;
        num += ascii;
        i++;
    }
    return num;
}

/*
funcionamento para "1234", por exemplo:
primeira iteracao:
0*10 + 1 = 1

segunda iteracao:
1*10 + 2 = 12

terceira iteracao:
12*10 + 3 = 123

quarta (e ultima) iteracao:
123*10 + 4 = 1234

assim evitamos ter de calcular potencias de 10 que aumentam com as iteracoes
*/
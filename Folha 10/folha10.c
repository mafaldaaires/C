//10.1
#include "dados.h"
#include <stdio.h>
int comprimento(char str[]){
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int is_in_str(char nome[], char nomecompleto[]){
    int size_nome = comprimento(nome), i = 0;
    while (nomecompleto[i+size_nome] != '\0'){
        int j = 0;
        while (nome[j] != '\0' && nomecompleto[i+j] == nome[j]){
            j++;
        }
        if (nome[j] == '\0') return 1;
        i++;
    }
    return 0;
}

void procura(char palavranome[]){
    printf("Alunos cujo nome inclui %s:\n", palavranome);
    for (int i = 0; i < NAlunos; i++){
        if (is_in_str(palavranome, Alunos[i].nome)) printf("%s %s\n", Alunos[i].codigo, Alunos[i].nome);
    }
}

//10.2
int codigo2Aluno(char codigo[],nome[]){
    
}
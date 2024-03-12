#include<stdio.h>
#include<stdlib.h>
#include "disciplina.h"

struct disciplina{
    char nome[100];
    int codigo;
};

Disciplina* cria_disciplina(char nome[], int codigo){
    Disciplina * materia = (Disciplina*) malloc(sizeof(Disciplina*));

    if (materia == NULL){
        printf("Erro ao alocar memória!" );
        exit(1);
    }

    printf("\nInforme os dados da disciplina:\n");

    printf("\nNome da disciplina: ");
    scanf(" %[^\n]", materia->nome);

    printf("\nCodigo da disciplina: ");
    scanf("%d", &codigo);

    return materia;
}

void exclui_disciplina(Disciplina* disciplina){

    free(disciplina);
}


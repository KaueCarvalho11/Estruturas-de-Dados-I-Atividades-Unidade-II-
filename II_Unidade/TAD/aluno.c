/*TAD: Aluno */
#include "aluno.h"
#include<stdio.h>
#include<stdlib.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){

    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno));
    if (estudante==NULL){
        printf("Erro ao alocar memoria! ");
        exit(1);
    }

    printf("\nInforme o nome do estudante:\n");
    scanf(" %[^\n]", estudante->nome);

    printf("Informe o numero de matricula do estudante:\n");
    scanf("%d", &estudante->matricula);

    printf("Informe o IRA do estudante:\n");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void imprime_dados(Aluno * estudante){
    printf("\nDados informados:\n");
    printf("\nNome: %s ", estudante->nome);
    printf("\nMatricula: %d ", estudante->matricula);
    printf("\nIRA: %.2f\n ", estudante->IRA);
}


Aluno ** matricula_alunos (int num_alunos){
    Aluno ** alunos = (Aluno **) malloc (num_alunos * sizeof(Aluno*));

    if (alunos == NULL){
        printf("Erro ao alocar memoria! ");
        exit(1);
    }
    
    for (int i = 0; i < num_alunos; i++){

        printf("\nMatricular aluno %d:", i + 1);
        alunos[i] = recebe_dados();
    }
    return alunos;
}

void matricula_e_imprime(int num_alunos){
    Aluno ** alunos_matriculados = matricula_alunos(num_alunos);

    printf("\nDados dos alunos matriculados:\n");

    for (int i = 0; i < num_alunos; i++){
        imprime_dados(alunos_matriculados[i]);
        libera(alunos_matriculados[i]);        
    }
}

void libera(Aluno * estudante){

    free(estudante);
}
#include<stdio.h>
#include<stdlib.h>
#include "aluno.h"
#include "disciplina.h"

struct aluno{
    char nome[100];
    int matricula;
    int num_disciplinas;
    Disciplina* disciplinas[1];   
};

Aluno* cria_aluno(char nome[], int matricula){
    Aluno * estudante = (Aluno*) malloc(sizeof(Aluno*));

    printf("\nInforme os dados do aluno: ");

    printf("\nNome do aluno: ");
    scanf(" %[^\n]", estudante->nome);

    printf("Numero de matricula: ");
    scanf("%d", &estudante->matricula);

    return estudante;
}

void matricula_disciplina(Aluno* aluno, Disciplina* disciplina){

    aluno->disciplinas[0] = disciplina;

}
void exclui_aluno(Aluno* aluno){
    
    free(aluno);
}


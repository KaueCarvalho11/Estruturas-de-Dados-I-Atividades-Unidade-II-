#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
#include "disciplina.h"

int main()
{

    char nome[100];
    char nome_disciplina[100];
    int matricula;
    int codigo;
    int num_alunos;
    
    Aluno *aluno;

    Aluno **lista_alunos = (Aluno **)malloc(num_alunos * sizeof(Aluno *));
    Disciplina *disciplina = cria_disciplina(nome, codigo);

    printf("informe o numero de alunos a serem cadastrados: ");
    scanf("%d", &num_alunos);
    for (int i = 0; i < num_alunos; i++)
    {
        Aluno *aluno = cria_aluno(nome_disciplina, matricula);
        matricula_disciplina(aluno, disciplina);
    }

    printf("\nCadastro na disciplina bem sucedido!");
       
    exclui_aluno(aluno);
    exclui_disciplina(disciplina);

    return 0;
}
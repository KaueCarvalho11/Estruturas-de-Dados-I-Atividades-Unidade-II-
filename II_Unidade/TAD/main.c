#include "aluno.h"
#include<stdio.h>

int main(void){

     int num_alunos;

    printf ("Informe o numero de alunos a serem matriculados: ");
    scanf("%d", &num_alunos);

    matricula_e_imprime(num_alunos);
    Aluno * aluno;
    //aluno = recebe_dados();
    //imprime_dados(aluno);
    Aluno ** matricula_alunos ();
    libera(aluno);

    return 0;
}
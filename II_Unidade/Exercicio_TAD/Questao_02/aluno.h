#include "disciplina.h"

/* Definição de um novo tipo: Aluno 
*/
typedef struct aluno Aluno;

/* Função aloca memória dinâmicamente para um struct Aluno
Recebe dados via teclado e retorna um ponteiro para Aluno*
*/
Aluno* cria_aluno(char nome[], int matricula);

/* Função que matricula os alunos na disciplina
*/
void matricula_disciplina(Aluno* aluno, Disciplina* disciplina);

/* Função que libera a memória alocada da TAD Aluno*
*/
void exclui_aluno(Aluno* aluno);

/* Definição de um novo tipo: Disciplina*/

typedef struct disciplina Disciplina;

/* Função que aloca memória dinamicamente para um struct Disciplina
Recebe dados via teclado e returna um ponteiro para Disciplina*
*/
Disciplina* cria_disciplina(char nome[], int codigo);

/* Função que libera memória alocada da TAD Disciplina*
*/
void exclui_disciplina(Disciplina* disciplina);

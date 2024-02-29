/*Definição do novo tipo: Aluno */
typedef struct aluno Aluno;

/* Função que aloca memória para um struct aluno,
Recebe os dados via teclado e retorna um ponteiro para Aluno*/
Aluno * recebe_dados(void);

/*Função que imprime na tela os dados informados na função recebe_dados*/
void imprime_dados(Aluno * aluno);

/*Função que libera memória alocada da TAD Aluno*/
void libera(Aluno * aluno);

/* Função que matricula N alunos */
Aluno ** matricula_alunos (int num_alunos);

/* Função que matricula os alunos e imprime suas informações*/
void matricula_e_imprime(int num_alunos);


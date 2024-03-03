/* Definição de um novo tipo: Aluno*/
typedef struct aluno{
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
}Aluno;

/* Função que aloca memória dinamicamente para um struct Aluno,
recebe os dados do aluno via teclado e retorna um ponteiro para Aluno*/
Aluno *preenche(void);

/* Função que realiza o cadastro de N funcionários*/
Aluno *cadastra(int num_alunos);

/* Função que abre um arquivo e imprime nele os dados dos aluno cadastrados */
void imprime_arquivo (Aluno * estudante, int num_alunos);


#include<stdio.h>
#include<stdlib.h>

typedef struct fruta{

    char nome [30];
    float preco;
}Fruta;

Fruta *preenche(void){

     Fruta *comida = (Fruta*) malloc(sizeof(Fruta));

    if (comida == NULL){

        printf("Erro ao alocar memoria! ");
        exit(1);
    }

    printf("\n Informe os dados da fruta!");

    printf("\nNome: ");
    scanf(" %[^\n]", comida->nome);
    
    printf("\nPreco: ");
    scanf(" %f", &comida->preco);

    return comida;

    } 

Fruta *cadastra(int *num_frutas){
    Fruta *comida =  (Fruta*) malloc(sizeof(Fruta));
    int continua;

    while (continua){
        comida = (Fruta*) realloc(comida, (*num_frutas + 1) * sizeof(Fruta));

        if (comida == NULL){
            printf("Erro ao alocar memoria! ");
            exit(1);
        }

        printf("\nCadastro da fruta %d:\n", *num_frutas + 1);

        comida[*num_frutas] = *preenche();
        (*num_frutas)++;

        printf("\nDeseja cadastrar mais frutas? (0 - Nao) e (1 - Sim) ");
        scanf("%d", &continua);
    }
    return comida;
}

void imprime_arquivo (Fruta *comida, int num_alunos){

    FILE *arquivo;
    arquivo = fopen("frutas.txt", "w");

    if (arquivo == NULL){
        printf("Erro ao abrir arquivo!");
        exit(1);
    }

    for (int i = 0; i < num_alunos; i++){

        fprintf(arquivo, "\n Fruta %d", i + 1);
        fprintf(arquivo, "\n%s, ", comida[i].nome);
        fprintf(arquivo, "R$%.2f\n ", comida[i].preco);
    }

    fclose(arquivo);
    printf("\nObrigado e volte sempre!");
}
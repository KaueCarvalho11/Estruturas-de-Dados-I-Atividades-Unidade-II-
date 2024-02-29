#include<stdio.h>
#include<string.h>

FILE * arquivo_entrada;
    FILE * arquivo_saida;

    float nota1;
    float nota2;
    float nota3;
    float media = 0;
    char nome [50];
    char linhas[50];

int main (void){

    arquivo_entrada = fopen("entrada_q3.txt", "r");

    if (arquivo_entrada==NULL){

        printf("Erro ao abrir arquivo! ");
        exit(1);
    }

    arquivo_saida = fopen("saida_q3.txt", "w");

    if (arquivo_saida==NULL){

        printf("Erro ao abrir arquivo! ");
        exit(1);
    }

    while(fgets(linhas, 50, arquivo_entrada) !=NULL){
        sscanf(linhas, "%20[^\t]\t %f\t %f\t %f", nome, &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3)/3;

        fprintf(arquivo_saida, "%s\t %.2f\t %s\n", nome, media, (media>= 7.0)?"aprovado": "reprovado");
    }

    fclose(arquivo_entrada);    
    fclose(arquivo_saida);   
    
}
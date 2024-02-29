#include<stdio.h>
#include<stdlib.h>

int main(){

    int vetor[10];
    int i;
    int menor;
    int maior;
    int soma = 0;
    float media;
    FILE * arquivo_entrada = fopen("entrada_q2.txt", "r");
    if (arquivo_entrada ==NULL){

        printf("Erro ao abrir arquivo! ");
        exit(1);

    }

    for (i = 0; i < 10; i++){
        fscanf(arquivo_entrada, "%d", &vetor[i]);
    }

    fclose(arquivo_entrada);

    menor = vetor[0];
    maior = vetor[0];

    for (i = 0; i < 10; i++){
        if(vetor[i] < menor){
            menor = vetor[i];

        }
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    for(i = 0; i < 10; i++){

        soma += vetor[i];            
    }

    media = (float)soma / 10;

    FILE * arquivo_saida = fopen("saida_q2.txt", "w");

    if (arquivo_saida == NULL){
        printf("Erro ao abrir arquivo de saída! ");
        exit(1);
    }

    fprintf(arquivo_saida, "Menor elemento: %d\n", menor);
    fprintf(arquivo_saida, "Maior elemento: %d\n", maior);
    fprintf(arquivo_saida, "Média dos elementos: %f", media);

    fclose(arquivo_saida);       
}
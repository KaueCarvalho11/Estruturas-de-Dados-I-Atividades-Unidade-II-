#include<stdio.h>
#include "operacoes.h"

int main (void){
    int a;
    int b;

    printf("Informe o valor de a:");
    scanf("%d", &a);

    printf("Informe o valor de b:");
    scanf("%d", &b);

    int mais = soma(a,b);
    printf("\nSoma: %d", mais);

    int menos = subtracao(a,b);
    printf("\nSubtracao: %d", menos);

    int vezes = multiplicacao(a,b);
    printf("\nMultiplicacao: %d", vezes);

    int dividir = divisao(a,b);
    printf("\nDivisao: %d", dividir);

    }
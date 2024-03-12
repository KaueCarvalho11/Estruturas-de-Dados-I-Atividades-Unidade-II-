#include<stdio.h>
#include<stdlib.h>
#include"conta.h"

int main(void) {
    ContaBancaria *conta1, *conta2;
    char titular[30];
    int numero;
    float saldo1, saldo2;
    float valor;

    printf("Informe os dados da primeira conta:\n ");
    conta1 = cria_conta(titular, numero, saldo1);

   printf("\nInforme os dados da segunda conta\n ");
    conta2 = cria_conta(titular, numero, saldo2);


    printf("\nOperacoes na primeira conta:\n");
    printf("\nInforme o valor do deposito: R$");
    scanf("%f", &valor);
    deposita(conta1, valor);

    printf("\nInforme o valor do saque:R$");
    scanf("%f", &valor);
    saca(conta1, valor);

    printf("\nOperacoes na segunda conta:\n");
    printf("\nInforme o valor a ser transferido para a primeira conta:R$");
    scanf("%f", &valor);
    transfere(conta2, conta1, valor);

    printf("\nSaldo final da primeira conta: R$%.2f\n", saldo(conta1));

    exclui_conta(conta1);
    exclui_conta(conta2);

    return 0;
}

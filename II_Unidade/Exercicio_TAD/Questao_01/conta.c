    #include<stdio.h>
    #include<stdlib.h>
    #include"conta.h"

    struct contabancaria{

    char titular [30];
    int numero;
    float saldo;        
    };

    ContaBancaria * cria_conta(char titular[], int numero, float saldo){

        ContaBancaria * banco = (ContaBancaria*) malloc(sizeof(ContaBancaria));
        if (banco == NULL){
            printf("Erro ao alocar memória! ");
            exit(1);
        }

        printf("\nInforme o nome do titular: ");
        scanf(" %[^\n]", banco->titular);

        printf("\nInforme o numero de identificacao: ");
        scanf("%d", &banco->numero);

        printf("\nInforme o saldo: R$");
        scanf("%f", &banco->saldo);

        return banco;
        
    }

    void deposita (ContaBancaria * banco, float valor){

        if (valor <= 0){
            printf("\nValor de depósito inválido!\n");
        }
        else{
        banco->saldo += valor;
        }
    }

    void saca (ContaBancaria * banco, float valor){

        if (valor <= 0){
            printf("\nValor invalido para saque!\n"); 
        }

        else if (valor > banco->saldo){
            printf("\nSaldo insuficiente para saque!");
        }

        else{
            banco->saldo -= valor;
            printf("\nSaque de R$%.2F realizado!", valor);
        }

    }

    void transfere(ContaBancaria *origem, ContaBancaria *destino, float valor) {
    if (valor > 0) {
        if (valor <= origem->saldo) {
            origem->saldo -= valor;
            destino->saldo += valor;
        } else {
            printf("\nSaldo insuficiente para transferencia!\n");
        }
    } else {
        printf("\nValor de transferencia invalido!\n");
    }
}
    float saldo (ContaBancaria * banco){
        return banco->saldo;
    }

    void exclui_conta (ContaBancaria * banco){  

        free(banco);
    }
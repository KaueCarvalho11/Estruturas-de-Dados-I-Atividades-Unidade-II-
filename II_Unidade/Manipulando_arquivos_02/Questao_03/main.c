#include<stdio.h>
#include<stdlib.h>
#include"fruta.h"

int main(){

    int num_frutas = 0;
    Fruta *comida = cadastra(&num_frutas);
    imprime_arquivo(comida, num_frutas);
    free(comida);

    return 0;
}
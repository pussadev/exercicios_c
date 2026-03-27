// Faça um algoritmo que recebe dois valores inteiros e mostra o resultado da multiplicação.

#include <stdio.h>
#include <locale.h>

int main(){

    int primeiroValor, segundoValor, multiOperacao;

    printf("Digite o valor 1: ");
    scanf("%i", &primeiroValor);
    printf("Digite o valor 2: ");
    scanf("%i", &segundoValor);

    multiOperacao = primeiroValor * segundoValor;

    printf("O valor da multiplicação: %i", multiOperacao);

    return 0;
}

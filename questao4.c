#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    int primeiroNumero, segundoNumero, operacao, resultadoOperacao;

    printf("Digite o primeiro número: ");
    scanf("%i", &primeiroNumero);
    printf("Digite o segundo número: ");
    scanf("%i", &segundoNumero);
    printf("Escolha a operação: 1 - Adição; 2 - Multiplicação; 3 - Divisão: ");
    scanf("%i", &operacao);

    switch (operacao)
    {
    case 1:
        resultadoOperacao = primeiroNumero + segundoNumero;
        printf("O resultado da adição é: %i", resultadoOperacao);
        break;
    case 2:
        resultadoOperacao = primeiroNumero * segundoNumero;
        printf("O resultado da multiplicação é: %i", resultadoOperacao);
        break;
    case 4:
        resultadoOperacao = primeiroNumero / segundoNumero;
        printf("O resultado da divisão é: %i", resultadoOperacao);
        break;
    
    default:
        break;
    }

    return 0;
}

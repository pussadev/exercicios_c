//Fac¸a um algoritmo que leia dois numeros e identifique se s ´ ao iguais ou diferentes. ˜Caso eles sejam iguais, mostre uma mensagem dizendo que eles sao iguais. Caso sejam diferentes, ˜informe qual numero ´ e o maior, e uma mensagem que s ´ ao diferentes.

#include <stdio.h>

int main(){

    int primeiroValor;
    int segundoValor;

    printf("Digite o primeiro valor: ");
    scanf("%i", &primeiroValor);
    printf("Digite o segundo valor: ");
    scanf("%i", &segundoValor);

    if (primeiroValor == segundoValor){
        printf("Os números são iguais.");
    } else if (primeiroValor > segundoValor) {
        printf("Os números são diferentes. O maior é: %i", primeiroValor);
    } else {
        printf("Os números são diferentes. O maior é: %i", segundoValor);
    }

    return 0;
}

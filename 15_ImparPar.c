//Faca um algoritmo que recebe um valor e mostra se o mesmo e par ou impar.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int verificaNumero;

    printf("Digite um numero para saber se e PAR ou IMPAR: ");
    scanf("%i", &verificaNumero);

    if (verificaNumero % 2 == 0) {
        printf("O numero e par.");
    } else {
        printf("O numero e impar.");
    }

    return 0;
}

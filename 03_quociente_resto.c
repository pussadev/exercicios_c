/*Fazer um algoritmo que obtenha dois numeros inteiros, ´ x e y, mostre o quociente e
o resto da divisao inteira entre eles.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int primeiroNumero, segundoNumero, resto;
    float quociente;

    printf("Digite um número: ");
    scanf("%d", &primeiroNumero);
    printf("Digite outro número: ");
    scanf("%d", &segundoNumero);

    quociente = primeiroNumero / segundoNumero;
    resto = primeiroNumero % segundoNumero;

    printf("O resultado da divisão é: %2f", quociente);
    printf("O resto da divisão é: %d", resto);

    return 0;
}

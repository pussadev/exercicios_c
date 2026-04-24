//Fac¸a um algoritmo que recebe um valor inteiro, caso esse nuumero seja positivo, mostre o valor digitado, caso seja negativo mostre o valor digitado com o sinal invertido.

#include <stdio.h>

int main(){

    int valorPosOuNeg;

    printf("Digite um valor inteiro (Positivo ou Negativo): ");
    scanf("%i", &valorPosOuNeg);

    if (valorPosOuNeg > 0){
        printf("O valor já era positivo: %i", valorPosOuNeg);
    } else {
        valorPosOuNeg = valorPosOuNeg * (-1);
        printf("Agora se torna positivo: %i", valorPosOuNeg);
    }

    return 0;
}

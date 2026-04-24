//As mac¸as custam R$0.30 cada, se forem compradas menos do que uma duzia, e ´R$0.25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o numero de mac¸as ´compradas, calcule e mostre o valor total da compra.

#include <stdio.h>

int main(){

    int qtdMacas;
    float valorTotal;

    printf("Digite a quantidade de macas: ");
    scanf("%i", &qtdMacas);
    
    if (qtdMacas < 6) {
        valorTotal = qtdMacas * 0.30;
        printf("O valor total é: %.2f", valorTotal);
    } else {
        valorTotal = qtdMacas * 0.25;
        printf("O valor total é: %.2f", valorTotal);
    }


    return 0;
}

//Fazer um algoritmo que converta cent´ımetros para polegadas (obs.: 1pol = 2.54cm)

#include <stdio.h>
#include <locale.h>

int main(){

    int cmValor;
    float polValor;

    printf("Digite o valor em centímetros: ");
    scanf("%d", &cmValor);
    
    polValor = cmValor / 2.54;

    printf("O valor em polegadas é: %.2f", polValor);



    return 0;
}

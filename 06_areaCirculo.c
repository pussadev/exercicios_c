//Fac¸a um algoritmo que recebe o valor do raio de um c´ırculo e apresenta o valor da área desse círculo.


#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    float valorRaio, areaCirculo;
    const float pi = 3.14159265;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &valorRaio);

    areaCirculo = pi * valorRaio * valorRaio;
    printf("A área do círculo é: %.2f", areaCirculo);


    return 0;
}

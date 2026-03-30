//Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro. (A = 2πr(h + r), V = πr2h)

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    float raioCilindro, alturaCilindro, areaCilindro, volumeCilindro;
    const float PI = 3.14159265359;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raioCilindro);
    printf("Digite a altura do cilindro: ");
    scanf("%f", &alturaCilindro);

    areaCilindro = 2 * PI * raioCilindro * (alturaCilindro + raioCilindro);
    volumeCilindro = PI * raioCilindro * raioCilindro * alturaCilindro;

    printf("A área do cilindro é: %.2f", areaCilindro);
    printf("O volume do cilindro é: %.2f", volumeCilindro);

    return 0;
}

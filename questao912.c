//Fazer um algoritmo que calcule a media aritm ´ etica dos n ´ umeros 7, 8 e 9 e a m ´ edia ´
//nos numeros 4, 5 e 6. Mostre a soma das duas m ´ edias e a m ´ edia das m ´ edias.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float mediaA, mediaB, somaAB, mediaAB;

    mediaA = (7 + 8 + 9) / 3;
    mediaB = (4 + 5 + 6) / 3;
    somaAB = mediaA + mediaB;
    mediaAB = somaAB / 2;

    printf("\nA média aritmética dos números 7 - 8 - 9 é: %.2f", mediaA);
    printf("\nA média aritmética dos números 4 - 5 - 6 é: %.2f", mediaB);
    printf("\nA soma das médias é: %.2f", somaAB);
    printf("\nA média das médias é: %.2f", mediaAB);

    return 0;
}

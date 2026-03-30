//Fac¸a um algoritmo que recebe um valor inteiro e mostra se o valor e zero, positivo ou negativo
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorChave;

    printf("Digite um número: ");
    scanf("%i", &valorChave);

    if (valorChave == 0) {
        printf("O valor é nulo. Tente outro.");
    } else if (valorChave > 0){
        printf("O valor é positivo.");
    } else {
        printf("O valor é negativo");
    }

    return 0;
}

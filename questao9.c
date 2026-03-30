//Ler dois valores para as variaveis ´ A e B, e efetuar as trocas dos valores de forma que a variavel ´ A passe a possuir o valor da variavel ´ B e a variavel ´ B passe a possuir o valor da variavel ´ A. Apresentar os valores trocados.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int a, b, aux;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("O valor de A é: %d\n", a);
    printf("O valor de B é: %d\n", b);

    return 0;
}

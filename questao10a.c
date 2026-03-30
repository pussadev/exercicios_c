//Faça um algoritmo que mostra a quantidade de cedulas de um caixa eletrônico de um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida apresente a quantidade de cada cedula que o cliente deverá receber, de forma que a quantidade de cedulas seja o menor possível.


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int valor_saque, quantidade_cedulas;
    int cedulas[] = {200, 100, 50, 20, 10, 5, 2};
    int totalDisponivel = 7;

    printf("Digite o valor a ser sacado: R$ ");
    scanf("%d", &valor_saque);

    printf("\n--- Relatório do Saque ---\n");

    for (int i = 0; i < totalDisponivel; i++) {
        quantidade_cedulas = valor_saque / cedulas[i];

        if (quantidade_cedulas > 0) {
            printf("%d cédula(s) de R$ %d\n", quantidade_cedulas, cedulas[i]);
        }

        valor_saque = valor_saque % cedulas[i];
    }


    return 0;
}

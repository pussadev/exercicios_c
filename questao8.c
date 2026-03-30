//Escreva um algoritmo que recebe o valor do salario fixo e o total de vendas efetuadas por um vendedor de uma loja durante o mes (em dinheiro). Sabendo que este vendedor ganha 15% de comissao sobre suas vendas efetuadas, informar o sal ˜ ario fixo e sal ´ ario no final do m ´ es.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salarioFixo, salarioFinal; 
    int vendasTotal;

    printf("Digite seu salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o seu total de vendas dos últimos 30 dias: ");
    scanf("%i", &vendasTotal);
    salarioFinal = salarioFixo + (salarioFixo * 0.15);
    printf("Seu salário final será de R$ %2.f", salarioFinal);

    return 0;
}

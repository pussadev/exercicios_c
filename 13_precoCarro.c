//O prec¸o de um automovel ´ e calculado pela soma do prec¸o de f ´ abrica, o prec¸o dos ´impostos (45% do prec¸o de fabrica) e a porcentagem do revendedor (28% do prec¸o de f ´ abrica). ´Fazer um algoritmo que leia o prec¸o de fabrica. Calcule e mostre o prec¸o final do carro.

#include <stdio.h>
#include <locale.h>

int main(){

    float precoFabrica, precoImpostos, porcentagemRevenda, precoTotal;

    printf("Digite o preço de fábrica do carro: ");
    scanf("%f", &precoFabrica);

    precoImpostos = precoFabrica * 0.45;
    porcentagemRevenda = precoFabrica * 0.28;
    precoTotal = precoFabrica + precoImpostos + porcentagemRevenda;

    printf("O valor total do carro é R$ %.2f", precoTotal);

    return 0;
}

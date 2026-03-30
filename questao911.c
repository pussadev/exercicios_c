//Fac¸a um algoritmo que auxiliara um funcion ´ ario de um caixa de supermercado. O ´algoritmo devera receber como entrada o valor da compra do cliente e o valor pago pelo cliente, em seguida o algoritmo devera apresentar o troco da compra, de forma que o mesmo deve ´
apresentar a quantidade de cedulas e moedas para compor o troco do cliente.

#include <stdio.h>
#include <locale.h>
#include <math.h> // Incluímos essa biblioteca para usar a função round() de arredondamento

int main(){
    setlocale(LC_ALL, "portuguese");

    float valor_compra, valor_pago, troco_compra;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);
    printf("Digite o valor pago: R$ ");
    scanf("%f", &valor_pago);

    troco_compra = valor_pago - valor_compra;

    // Se o cliente pagou menos do que a compra, não tem troco
    if (troco_compra < 0) {
        printf("\nO valor pago é insuficiente!\n");
        return 0; // Encerra o programa
    }

    printf("\nTroco total: R$ %.2f\n", troco_compra);
    printf("--- Detalhamento do Troco ---\n");

    int troco_centavos = round(troco_compra * 100);

    int valores_disponiveis[] = {20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int total_valores = 13;

    for (int i = 0; i < total_valores; i++) {
        
        int quantidade = troco_centavos / valores_disponiveis[i];
        
        if (quantidade > 0) {
            // Volta o valor para "Reais" na hora de mostrar na tela (dividindo por 100.0)
            float valor_em_reais = valores_disponiveis[i] / 100.0;
            
            if (valores_disponiveis[i] >= 200) {
                printf("%d cédula(s) de R$ %.2f\n", quantidade, valor_em_reais);
            } else {
                printf("%d moeda(s) de R$ %.2f\n", quantidade, valor_em_reais);
            }
        }
        
        // Atualiza o resto do troco (em centavos)
        troco_centavos = troco_centavos % valores_disponiveis[i];
    }

    return 0;
}

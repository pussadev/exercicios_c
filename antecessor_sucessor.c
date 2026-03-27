//Fazer um algoritmo que leia um número e mostre o seu antecessor e o seu sucessor.

#include <stdio.h>
#include <locale.h>

int main(){
    
    int numero, operacao, resultado;
    
    printf("Digite o número: ");
    scanf("%i", &numero);
    printf("Escolha a operação: 1 - Antecessor; 2 - Sucessor: ");
    scanf("%i", &operacao);
    
    if (operacao == 1) {
        resultado = numero - 1;
        printf("O antecessor do número é: %i", resultado);
    } else if (operacao == 2) {
        resultado = numero + 1;
        printf("O sucessor do número é: %i", resultado);
    }
    
    return 0;
}

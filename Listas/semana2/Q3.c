// Problema 3 - Cálculo de juros compostos
// Escreva um programa que leia o capital inicial, a taxa de juros (em porcentagem) e o tempo (em anos).
// Calcule e exiba o montante final usando a fórmula de juros compostos. Declare as variáveis com tipos
// apropriados.
// Fórmula: Montante = Capital × (1 + taxa/100)^tempo
// Dica: Use a função pow() da biblioteca math.h

#include <stdio.h>
#include <math.h>

int main() {
    
    float capital_inicial, taxa_juros;
    int tempo;

    printf("Digite o seu capital inicial: ");
    scanf("%f", &capital_inicial);

    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa_juros);

    printf("Digite o tempo (em anos): ");
    scanf("%d", &tempo);

    float montante = capital_inicial * pow(1 + (taxa_juros/100), tempo);

    printf("Seu montante final é: %.2f\n", montante);

    return 0;
}
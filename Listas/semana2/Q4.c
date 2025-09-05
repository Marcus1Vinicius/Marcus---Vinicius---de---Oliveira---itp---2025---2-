// Problema 4 - Operações aritméticas básicas
// Crie um programa que leia dois números inteiros e exiba:
// A soma dos números
// A diferença (primeiro menos segundo)
// O produto
// A divisão real (resultado em float)
// O resto da divisão inteira
// A média aritmética

#include <stdio.h>

int main() {
    
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    int soma = n1 + n2;
    int diferenca = n1 - n2;
    int produto = n1 * n2;
    float divisao_real = (float)n1 / n2;
    int resto_divisao = n1 % n2;
    float media = (n1+n2) / 2.0;

    printf("A soma: %d\nDiferença: %d\nProduto: %d\nDivisão real: %.2f\nResto da divisão: %d\nMédia: %.2f\n", soma, diferenca, produto, divisao_real, resto_divisao, media);

    return 0;
}
// Problema 2 - Conversão de temperatura
// Desenvolva um programa que leia uma temperatura em graus Celsius e converta para Fahrenheit e Kelvin.
// Use variáveis do tipo float e exiba os resultados com 1 casa decimal.
// Fórmulas:
// Fahrenheit = (Celsius × 9/5) + 32
// Kelvin = Celsius + 273.15

#include <stdio.h>

int main() {
    
    float graus_Celsios;

    printf("Digite a temperatura em graus Celsios: ");
    scanf("%f", &graus_Celsios);

    float formula_Fahrenheit = (graus_Celsios * (9.0/5.0)) + 32;
    float formula2_Kelvin = graus_Celsios + 273.15;

    printf("Sua temperatura em Fahrenheit é: %.1f\n. Em Kelvin é: %.1f\n", formula_Fahrenheit, formula2_Kelvin);

    return 0;
}
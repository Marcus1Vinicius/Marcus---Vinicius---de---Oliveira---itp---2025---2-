#include <stdio.h>

int main() {
    
    float peso, altura;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    float IMC_Formula = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", IMC_Formula);

    return 0;
}
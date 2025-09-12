// Problema 1 - Classificação de IMC
// Modifique o programa do Problema 1 para que, além de calcular o IMC, também classifique o resultado de
// acordo com a tabela:
// Abaixo de 18.5: "Abaixo do peso"
// Entre 18.5 e 24.9: "Peso normal"
// Entre 25.0 e 29.9: "Sobrepeso"
// 30.0 ou mais: "Obesidade"

#include <stdio.h>

int main() {
    
    float peso, altura, IMC;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    if(IMC < 18.5){
        printf("Abaixo do peso, seu IMC é: %.2f", IMC);
    }
    else if(IMC <= 24.9){
        printf("Peso normal, seu IMC é: %.2f", IMC);
    }
    else if(IMC <=29.9){
        printf("Sobrepeso, seu IMC é: %.2f", IMC);
    }
    else{
        printf("Obesidade, seu IMC é: %.2f", IMC);
    }


    return 0;
    
}
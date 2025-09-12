// Problema 2 - Calculadora de energia elétrica
// Uma companhia de energia cobra da seguinte forma:
// Residencial: R$ 0,60 por kWh
// Comercial: R$ 0,48 por kWh
// Industrial: R$ 1,29 por kWh
// Além disso, há uma taxa fixa de R$ 15,00 para todos os tipos. Crie um programa que leia o consumo em
// kWh e o tipo de consumidor (R para residencial, C para comercial, I para industrial) e calcule o valor total da
// conta.

#include <stdio.h>

int main() {
    
    float consumo_kwh;
    char tipo_residencia;

    printf("Digite o seu consumo por kwh: ");
    scanf("%f", &consumo_kwh);

    printf("Digite o tipo da sua residência\nR para residencial\nC para comercial\nI para industrial ");
    scanf(" %c", &tipo_residencia);

    if(tipo_residencia == 'R'){
        float formula = (0.60 * consumo_kwh) + 15;
        printf("Você deve pagar: %.2f", formula);
    }
    else if(tipo_residencia == 'C'){
        float formula = (0.48 * consumo_kwh) + 15;
        printf("Você deve pagar: %.2f", formula);
    }
    else if(tipo_residencia == 'I'){
        float formula = (1.29 * consumo_kwh) + 15;
        printf("Você deve pagar: %.2f", formula);
    }

    return 0;
    
}
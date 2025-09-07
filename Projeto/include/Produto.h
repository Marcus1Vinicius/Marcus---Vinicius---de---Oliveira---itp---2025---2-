#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct {

    int id;
    char nome[50];
    float valor;
    int quantidade;
    char codigo_de_barra[20];
    
} Produto;

#endif
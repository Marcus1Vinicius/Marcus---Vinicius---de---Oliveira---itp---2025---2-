#ifndef VENDA_H
#define VENDA_H

#include "Data.h"
#include "Item_venda.h"
#include "Produto.h"

typedef struct {
    int id;
    Data data_venda;
    float valor;
    Item_venda lista_produtos;
    // Produto produtos;

}Venda;

#endif
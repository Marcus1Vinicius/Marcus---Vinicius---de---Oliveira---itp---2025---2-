#ifndef VENDA_H
#define VENDA_H

#include "Data.h"
#include "Item_venda.h"
#include "Produto.h"

typedef struct {
    int id;
    Data data_venda;
    int valor;
    Item_venda lista_produtos;

}Venda;

#endif
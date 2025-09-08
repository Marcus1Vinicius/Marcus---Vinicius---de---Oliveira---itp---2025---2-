#ifndef NOTA_FISCAL_H
#define NOTA_FISCAL_H

#include "Data.h"
#include "Item_venda.h"
#include "Comercio.h"

typedef struct {

    int id;
    int id_venda;
    Data data_nf;
    Item_venda lista_produtos;
    Comercio informacoes_comercio;
    
} Nota_fiscal;

#endif
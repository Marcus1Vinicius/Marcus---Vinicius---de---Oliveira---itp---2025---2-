#ifndef COMERCIO_H
#define COMERCIO_H

#include "Endereco.h"

typedef struct {

    char nome;
    char contato;
    char CNPJ;
    Endereco endereco_comercio;
   
} Comercio;

#endif
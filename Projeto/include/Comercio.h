#ifndef COMERCIO_H
#define COMERCIO_H

#include "Endereco.h"

typedef struct {

    char nome;
    char contato;
    char CNPJ; 
    // vou precisar criar uma struct para o CNPJ já que é um atributo que precisa ser validado
    Endereco endereco_comercio;
   
} Comercio;

#endif
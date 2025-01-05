#ifndef EMPRESA_HPP
#define EMPRESA_HPP
#include "Onibus.hpp"
#include <iostream>

struct Empresa {
    int NUM_MAX_ONIBUS;
    int qtde_onibus;
    Onibus *vetor_onibus[];

    Empresa();

    Onibus *add_onibus(string, int);

    Onibus *busca_onibus(string);

    void imprimir_estado();
};
#endif

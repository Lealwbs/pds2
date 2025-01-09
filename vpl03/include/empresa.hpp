#ifndef EMPRESA_HPP
#define EMPRESA_HPP
#include "Onibus.hpp"
#include <iostream>

struct Empresa {
    static const int NUM_MAX_ONIBUS = 20;
    Onibus *vetor_onibus[NUM_MAX_ONIBUS];
    int qtde_onibus;

    Empresa();

    Onibus *add_onibus(string, int);

    Onibus *busca_onibus(string);

    void imprimir_estado();
};
#endif

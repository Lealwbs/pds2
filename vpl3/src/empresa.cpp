#include "../include/EMPRESA.hpp"
#include "../include/ONIBUS.hpp"
#include <iostream>

using namespace std;

Empresa::Empresa() {
    // const int NUM_MAX_ONIBUS = 20;
    // Onibus *vetor_onibus[20];
    qtde_onibus = 0;
    for (int i = 0; i < NUM_MAX_ONIBUS; i++) {
        vetor_onibus[i] = nullptr;
    };
};

Onibus *Empresa::add_onibus(string placa, int cap_max) {
    if (qtde_onibus < NUM_MAX_ONIBUS) {
        vetor_onibus[qtde_onibus] = new Onibus(placa, cap_max);
        qtde_onibus += 1;
        return vetor_onibus[qtde_onibus-1];
    } else {
        return nullptr;
    };
};

Onibus *Empresa::busca_onibus(string placa_procurada) {
    for (int i = 0; i < NUM_MAX_ONIBUS; i++) {
        if (vetor_onibus[i] != nullptr && vetor_onibus[i]->placa == placa_procurada) {
            return vetor_onibus[i];
        }
    }
    return nullptr;
}

void Empresa::imprimir_estado() {
    for (int i = 0; i < NUM_MAX_ONIBUS; i++) {
        if (vetor_onibus[i] != nullptr) {
            vetor_onibus[i]->print_estado();
        };
    };
};
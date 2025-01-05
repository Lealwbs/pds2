#include "../include/ONIBUS.hpp"
#include <iostream>
#include <string>

using namespace std;

Onibus::Onibus(string placa, int cap_max = 20) {
    this->placa = placa;
    this->cap_max = cap_max;
    lot_atual = 0;
};

void Onibus::subir_psg(int qtde) {
    lot_atual += qtde;
};

void Onibus::descer_psg(int qtde) {
    lot_atual -= qtde;
};

void Onibus::transf_psg(Onibus *outro_onibus, int qtde) {
    descer_psg(qtde);
    outro_onibus->lot_atual += qtde;
};

void Onibus::print_estado() {
    cout << placa << " (" << lot_atual << "/" << cap_max << ")" << endl;
};
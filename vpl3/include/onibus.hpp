#ifndef ONIBUS_HPP
#define ONIBUS_HPP

#include <iostream>
#include <string>
using namespace std;

struct Onibus {
    string placa;
    int cap_max;
    int lot_atual;

    Onibus(string, int);

    void subir_psg(int);

    void descer_psg(int);

    void transf_psg(Onibus *, int);

    void print_estado();
};

#endif
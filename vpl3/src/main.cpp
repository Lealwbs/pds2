#include "../include/EMPRESA.hpp"
#include "../include/ONIBUS.hpp"
#include <iostream>

int main() {
    Empresa BH_BUS = Empresa();
    string resposta;
    string pplaca;
    int num_aux;

    while (true) {
        cin >> resposta;
        if (resposta == "C") {
            cin >> pplaca;
            cin >> num_aux; // lotação maxima

            if (BH_BUS.busca_onibus(pplaca) == nullptr) {
                if (BH_BUS.add_onibus(pplaca, num_aux) == nullptr) {
                    cout << "quantidade máxima de ônibus atingida" << endl;
                } else {
                    cout << "novo onibus cadastrado" << endl;
                };
            } else {
                cout << "ERRO : onibus repetido" << endl;
            };
        };

        if (resposta == "S") {
            cin >> pplaca;
            cin >> num_aux; // qtde pessoas que subiram
            cout << pplaca << num_aux << endl;
            if (BH_BUS.busca_onibus(pplaca) == nullptr) {
                cout << "ERRO : onibus inexistente" << endl;
            } else if ((BH_BUS.busca_onibus(pplaca))->lot_atual + num_aux > (BH_BUS.busca_onibus(pplaca))->cap_max) {
                cout << "ERRO : onibus lotado" << endl;
            } else {
                BH_BUS.busca_onibus(pplaca)->subir_psg(num_aux);
                cout << "passageiros subiram com sucesso" << endl;
            };
        };


        if (resposta == "D") {
            cin >> pplaca;
            cin >> num_aux; // qtde pessoas que desceram

            if (BH_BUS.busca_onibus(pplaca) == nullptr) {
                cout << "ERRO : onibus inexistente" << endl;
            } else if ((BH_BUS.busca_onibus(pplaca)->lot_atual) - num_aux < 0) {
                cout << "ERRO : faltam passageiros" << endl;
            } else {
                BH_BUS.busca_onibus(pplaca)->descer_psg(num_aux);
                cout << "passageiros desceram com sucesso" << endl;
            };
        };


        if (resposta == "T") {
            cin >> pplaca;
            string pplaca2;
            cin >> pplaca2;
            cin >> num_aux; // qtde pessoas que foram transferidas

            if (BH_BUS.busca_onibus(pplaca) == nullptr || BH_BUS.busca_onibus(pplaca) == nullptr) {
                cout << "ERRO : onibus inexistente" << endl;
            } else if ((BH_BUS.busca_onibus(pplaca)->lot_atual) - num_aux < 0 || (BH_BUS.busca_onibus(pplaca2))->lot_atual + num_aux > (BH_BUS.busca_onibus(pplaca2))->cap_max) {
                cout << "ERRO : transferencia cancelada" << endl;
            } else {
                BH_BUS.busca_onibus(pplaca)->transf_psg(BH_BUS.busca_onibus(pplaca2), num_aux);

                cout << "transferencia de passageiros efetuada" << endl;
            };
        };


        if (resposta == "I") {
            BH_BUS.imprimir_estado();
        };

        if (resposta == "F") {
            return 0;
        };
    };
};
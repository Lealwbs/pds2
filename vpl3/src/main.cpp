#include "../include/EMPRESA.hpp"
#include "../include/ONIBUS.hpp"
#include <iostream>

int main() {
    Empresa BH_BUS = Empresa();
    string resposta;
    string pplaca;
    int num_aux;

    while (cin >> resposta) {
        cout << resposta << endl;
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
            } else if ((BH_BUS.busca_onibus(pplaca)) - num_aux < 0) {
                cout << "ERRO : faltam passageiros" << endl;
            } else {
                BH_BUS.busca_onibus(pplaca)->descer_psg(num_aux);
                cout << "passageiros desceram com sucesso" << endl;
            };
        };


        // if (resposta == "T") {
        //     cin >> pplaca;
        //     cin >> num_aux; // qtde pessoas que desceram
        //
        //     if (Onibus.BH_BUS.buscar_placa(pplaca) == nullptr) {
        //         cout << "ERRO : onibus inexistente" << endl;
        //     } else if (Onibus.BH_BUS->lot_atual - num_aux < 0) {
        //         cout << "ERRO : faltam passageiros" << endl;
        //     } else {
        //         Onibus.BH_BUS.descer_psg(num_aux);
        //         cout << "passageiros desceram com sucesso" << endl;
        //     };
        //
        // };

        //T : transfere pessoas de um ônibus a outro . Você poderá considerar que os valores fornecidos serão sempre positivos.
        // Deve ser impresso: “transferencia de passageiros efetuada” em caso de sucesso ou “ERRO : onibus inexistente” caso um das
        // placas dos onibus indicadas sejam inválidas ou “ERRO : transferencia cancelada” se tem alguma situação de lotação invalida.

        if (resposta == "I") {
        };

        if (resposta == "F") {
            return 0;
        };
    };
};


// T : transfere pessoas de um ônibus a outro . Você poderá considerar que os valores fornecidos serão sempre positivos.
// Deve ser impresso: “transferencia de passageiros efetuada” em caso de sucesso ou “ERRO : onibus inexistente” caso um das
// placas dos onibus indicadas sejam inválidas ou “ERRO : transferencia cancelada” se tem alguma situação de lotação invalida.
// I: lista as informações de todos os ônibus cadastrados (placa, lotação atual, lotação máxima), um ônibus por linha.
// F: Finaliza a execução do programa.
// Segue abaixo um exemplo de uma execução do Sistema:
//
// C OLX123 11 novo onibus cadastrado C OLX123 12 ERRO : onibus repetido I OLX123 (0/11) S OLX123 10 passageiros subiram
// com sucesso D OLX123 5 passageiros desceram com sucesso I OLX123 (5/11) C BBB222 10 novo onibus cadastrado S BBB222 2
// passageiros subiram com sucesso I OLX123 (5/11) BBB222 (2/10) F
//
// Você deverá submeter 5 arquivos: Onibus.hpp, Onibus.cpp, Empresa.hpp, Empresa.cpp e main.cpp. No seu programa principal,
// você não deverá acessar diretamente os atributos dos seus TADs. Todaso o acesso deverá ser feito através dos métodos
// implementados.
//
//
// tes

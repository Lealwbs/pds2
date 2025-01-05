#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "..\include\ALUNO.HPP"

bool compararPorNome(Aluno &a, Aluno &b) {
    return a.return_nome() < b.return_nome();
};

int main() {
    vector<Aluno> alunos;
    string entrada;

    // Nome do aluno OU "END"
    while (cin >> entrada) {
        if (entrada == "END") {
            break;
        };

        int aux_num_matricula;
        cin >> aux_num_matricula;
        vector<int> notas_temp;

        int aux_notas;
        while (cin >> aux_notas) {
            if (aux_notas == -1) {
                break;
            };
            notas_temp.push_back(aux_notas);
        };

        Aluno temp_aluno(entrada, aux_num_matricula, notas_temp);
        alunos.push_back(temp_aluno);

    };

    // ordem alfabética;
    std::sort(alunos.begin(), alunos.end(), compararPorNome);

    // printar as informações após o END
    for (Aluno aluno : alunos) {
        aluno.print_header();
        aluno.print_body();
    };


    return 0;
}

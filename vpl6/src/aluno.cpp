#include <iostream>
#include "..\include\ALUNO.HPP"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

Aluno::Aluno(string nome, int num_matricula, vector<int> notas) {
    this->nome = nome;
    this->num_matricula = num_matricula;
    this->notas = notas;
};

float Aluno::media_notas() {
    int soma = 0;
    int count = 0;
    for (const auto &nota: this->notas) {
        soma += nota;
        count += 1;
    };
    return soma / count;
};

int Aluno::return_nota_max() {
    int max = 0;
    for (const auto &nota: this->notas) {
        if (nota > max) {
            max = nota;
        };
    };
    return max;
};

int Aluno::return_nota_min() {
    int min = 1000;
    for (auto &nota: this->notas) {
        if (nota < min) {
            min = nota;
        };
    };
    return min;
};

void Aluno::add_nota(int nota) {
    this->notas.push_back(nota);
};

void Aluno::print_notas() {
    for (const auto & nota : notas) {
        cout << nota << " ";
    };
};

void Aluno::print_header() {
    cout << this->num_matricula << " " << this->nome << " ";
    this->print_notas();
    cout << endl;
};

void Aluno::print_body() {
    cout << fixed << setprecision(2);
    cout << this->media_notas() << " ";
    cout << fixed << setprecision(0);
    cout << this->return_nota_max() << " " << this->return_nota_min() << endl;
};

string Aluno::return_nome() {
    return this->nome;
}


#ifndef ALUNO_HPP
#define ALUNO_HPP
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno {
private:
    string nome;
    int num_matricula;
    vector<int> notas;

public:
    Aluno(string, int, vector<int>);

    void add_nota(int nota);

    float media_notas();

    int return_nota_max();

    int return_nota_min();

    void print_notas();

    void print_header();

    void print_body();

    string return_nome();
};

#endif

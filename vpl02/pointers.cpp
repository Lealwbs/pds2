#include <iostream>

using namespace std;

// 0) Crie uma função que receba três variveis inteiras como parâmetro, da seguinte forma:
//    - A primeira deve ser passada por valor
//    - A segunda deve ser passada por referência
//    - A terceira deve ser passada "por referência" usando apontadores (passagem "por referência" disponível em C)
//    A função deverá somar 1 ao valor de cada uma das 3 variáveis e retornar.

void function(int var1, int &var2, int *var3){
    var1 += 1;
    var2 += 1;
    *var3 += 1;
};


int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int variavel1;
    cin >> variavel1;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *ponteiro1 = nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com dados lidos da entrada
    int tamanho_vetor_inteiros;
    cin >> tamanho_vetor_inteiros;
    int vetor_inteiros[tamanho_vetor_inteiros];
    for (int i=0; i<tamanho_vetor_inteiros; i++) {
        cin >> vetor_inteiros[i];
    };

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout << &variavel1 << endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    cout << variavel1 << endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout << &ponteiro1 << endl;

    // 7) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro1 << endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << vetor_inteiros << endl;
    // ou &tamanho_vetor_inteiros[0]

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << &vetor_inteiros[0] << endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout << vetor_inteiros[0] << endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ponteiro1 = &variavel1;

    // 12) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro1 << endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ponteiro1 << endl;

    // 14) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ponteiro1 = 5;

    // 15) Imprima o VALOR da variável declarada em (1)
    cout << variavel1 << endl;

    // 16) Atribua o VALOR da variável (3) à variável declarada em (2)
    ponteiro1 = vetor_inteiros;

    // 17) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro1 << endl;

    // 18) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ponteiro1 << endl;

    // 19) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ponteiro1 = &vetor_inteiros[0];

    // 20) Compare o valor variáveis (2) e (3), imprimindo 'S' se forem iguais e 'N' se forem diferentes
    if (ponteiro1 == vetor_inteiros) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    // 21) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro1 << endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ponteiro1 << endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for (int i=0; i<tamanho_vetor_inteiros; i++) {
        *(ponteiro1+i) *= 10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for (int i=0; i<tamanho_vetor_inteiros; i++) {
        cout << vetor_inteiros[i];
    }

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for (int i=0; i<tamanho_vetor_inteiros; i++) {
        cout << vetor_inteiros[0+i];
    };

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (2)
    for (int i=0; i<tamanho_vetor_inteiros; i++) {
        cout << *(ponteiro1+i);
    };

    // 27) Atribua o ENDEREÇO da última posição de (3) à variável declarada em (2)
    ponteiro1 = &vetor_inteiros[tamanho_vetor_inteiros-1];

    // 28) Imprima o VALOR da variável declarada em (2)
    cout << ponteiro1 << endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    cout << *ponteiro1 << endl;

    // 30) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **ponteiro2 = &ponteiro1;

    // 31) Imprima o VALOR da variável declarada em (30)
    cout << ponteiro2 << endl;

    // 32) Imprima o ENDEREÇO da variável declarada em (30)
    cout << &ponteiro2 << endl;

    // 33) Imprima o VALOR guardado no ENDEREÇO apontado por (30)
    cout << *ponteiro2 << endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (30)
    cout << **ponteiro2 << endl;

    // 35) Crie 3 variáveis interiras e leia o valor delas da entrada
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    // 36) Chame a função criada em (0) passando as 3 variáveis criadas em (35) como parâmetro.
    function(a, b, &c);

    // 37) Imprima o valor das 3 variáveis criadas em (35)
    cout << a << " " << b << " " << c << endl;

    return 0;
}
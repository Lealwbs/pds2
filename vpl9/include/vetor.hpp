#ifndef VETOR_HPP
#define VETOR_HPP

#include <iostream>

using namespace std;

template <typename T>
class Vetor{

private:
    int tam_max_vetor;
    int counter;
    T *ptr_vetor;
 
public:
    Vetor(int n){
        this->tam_max_vetor = n;
        this->counter = 0;
        this->ptr_vetor = new T[n];
    };

    Vetor(const Vetor<T> &other){
        this->tam_max_vetor =  other.tam_max_vetor;
        this->counter = other.counter;
        this->ptr_vetor = new T[this->tam_max_vetor];

        for (int i=0; i<this->counter; i++){
            this->ptr_vetor[i] = other.ptr_vetor[i];
        };
    };


    ~Vetor(){
        delete[] this->ptr_vetor;
    };

    T GetElemento(int i){
        return this->ptr_vetor[i];
    };

    void SetElemento(int i, T x){
        this->ptr_vetor[i] = x;
    };

    void AdicionaElemento(T x){
        if (this->counter < this->tam_max_vetor){
            this->ptr_vetor[this->counter] = x;
            this->counter++;
        } else {
            cout << "VETOR CHEIO" << endl;
        };
    };

    void Imprime(){
        for (int j=0; j<this->counter; j++){
            cout << this->ptr_vetor[j] << " ";
        };
        cout << endl;
    };
};

#endif


#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int qtde_Num;
    float temp, soma, soma2;
    cin >> qtde_Num;
    float array_Nums[qtde_Num];

    for(int i=0; i<qtde_Num; i++){
        cin >> temp;
        array_Nums[i] = temp;
        soma += temp;
    };

    float media_aritimetica = soma/qtde_Num;

    for(int j=0; j<qtde_Num; j++){
        soma2 += pow((array_Nums[j] - media_aritimetica),2);      
    };

    float desvio_padrao = sqrt(soma2/qtde_Num);

    cout << media_aritimetica << endl << desvio_padrao << endl;

    return 0;

}


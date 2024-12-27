#include <iostream>
#include <string.h>

using namespace std;
 
int main(){

    FILE *arq;
    arq = fopen("palavras.txt", "rt");

    if (arq == NULL){
        cout << "ERRO: Não foi possível abrir o arquivo" << endl;
        return 1;
    };

    int escolha, qtde_palavras_possiveis;
    string temp;
    cin >> escolha;

    getline(arq, qtde_palavras_possiveis);

    if (escolha > qtde_palavras_possiveis){
        cout << "ERRO: Só é possível escolher um número entre 1 e " << qtde_palavras_possiveis << endl;
        return 1;
    };

    string palavras_possiveis[qtde_palavras_possiveis];

    for(int i=0; i<qtde_palavras_possiveis; i++){
        getline(arq, palavras_possiveis[i]);
    };

    string palavra_secreta = palavras_possiveis[escolha];

    // cout << palavra_secreta << endl;

    return 0;
}
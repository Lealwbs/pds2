#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string entrada;
    getline(cin, entrada);
    int strlength = entrada.length();

    for(int i=0; i<strlength; i++){
        if(entrada[i] != entrada[strlength - i - 1]){
            cout << "NAO" << endl;
            return 0; 
        };
    };

    cout << "SIM" << endl;

    return 0;
}
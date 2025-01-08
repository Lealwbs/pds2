#include <iostream>

using namespace std;


class Ponto{
private:
    int x;
    int y;

public:

    Ponto(int x, int y){
        this->x = x;
        this->y = y;
        cout << "Ponto " << this << " Criado" << endl;
    };

    Ponto(int x) : Ponto(x, x){};

    Ponto() : Ponto(0){};

    ~Ponto(){
        cout << "Ponto " << this << " Destruido" << endl;
    };

    void set_xy(int x, int y){
        this->x = x;
        this->y = y;
    };

    int get_x(){
        return this->x;
    };

    int get_y(){
        return this->y;
    };

    void print_xy(){
        cout << "x: " << get_x() << " | y: " << get_y() << endl;
    }
};

class FiguraGeometrica{

};

class Retangulo : FiguraGeometrica{
    
};

class Triangulo : FiguraGeometrica{
    
};

class Circulo : FiguraGeometrica{
    
};

int main(){
    cout << "Hello World" << endl;

    Ponto A(10, 20);
    Ponto B(-5);
    Ponto C{};

    A.print_xy();
    B.print_xy();
    C.print_xy();



    return 0;
};

/*

A sua superclasse deve ser uma classe abstrata. 
Ela possui um atributo chamado "centro" com coordenadas do centro da figura geométrica.

Esse atributo deve ser um objeto de outra classe chamada "Ponto", 
criada para representar um ponto no espaço 2D (implemente a classe
com construtores adequados e métodos Get / Set para os atributos.

A sua classe base também deve possuir e um método chamado 
"Desenha" que imprime essas coordenadas e que pode ser redefinido
nas classes herdeiras. Além disso, a sua classe possui um método virtual
puro chamado "CalculaArea" que calcula a área ocupada pelas figuras geométricas 
(retornando um valor float) e será implementado nas classes herdeiras.

A classe Retângulo tem como os atributos os dois lados do retângulo.
O seu método Desenha chama o método da classe pai e depois imprime a palavra 
"RETANGULO". Já o seu método CalculaArea retorna a área do retângulo.

A classe Círculo tem como o atributo o raio do círculo
. O seu método Desenha chama o método da classe pai e depois imprime a palavra
"CIRCULO", e o seu método CalculaArea retorna a área do circulo.

Por fim, a classe Triângulo tem como atributos a base e altura do triangulo. 
O seu método Desenha chama o método da classe pai e depois imprime a palavra
"TRIANGULO", e o seu método CalculaArea retorna a sua área.
Use adequadamente os modificadores de acesso (public, protected e private) 
em suas classes e implemente os métodos construtores e destrutores conforme necessário. 

O seu programa principal deverá armazenar um vetor de figuras geométricas 
e receber comandos para a sua manipulação. Mais especificamente, ele vai ser um 
loop que lê comandos da entrada (R, C, T, D, A, E) juntamente com eventuais
parâmetros e faz as operações de acordo.  Os comandos são:

R <C1> <C2> <L1> <L2>: Cria um retângulo com lados L1 e L2 com centro em C1, C2.

C <C1> <C2> <R>: Cria um círculo de raio R com centro em C1, C2.

T <C1> <C2> <B> <A>: Cria um triângulo de base B e altura A com centro em C1, C2.

D:  "Desenha" todas as figuras geométricas armazenadas, imprimindo as 
coordenadas do seu centro e o texto especificado para cada tipo.

A: calcula e imprime a área total ocupada por todas as figuras geométricas.

E: termina a execução do programa.
*/
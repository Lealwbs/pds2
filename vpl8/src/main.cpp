#include <iostream>
#include <vector>

using namespace std;

class Ponto {
private:
    int x;
    int y;

public:
    Ponto(int x, int y) {
        this->x = x;
        this->y = y;
        // cout << "Ponto " << this << " Criado" << endl;
    };

    Ponto(int x) : Ponto(x, x) {
    };

    Ponto() : Ponto(0) {
    };

    ~Ponto() {
        // cout << "Ponto " << this << " Destruido" << endl;
    };

    void set_xy(int x, int y) {
        this->x = x;
        this->y = y;
    };

    int get_x() {
        return this->x;
    };

    int get_y() {
        return this->y;
    };

    void print_xy() {
        cout << "x: " << get_x() << " | y: " << get_y() << endl;
    }
};

class FiguraGeometrica {
protected:
    Ponto centro;

public:
    FiguraGeometrica(int x, int y) {
        centro = Ponto(x, y);
        // centro.set_xy(x, y);
    };

    virtual ~FiguraGeometrica() {
    };

    virtual void desenha() {
        cout << centro.get_x() << " " << centro.get_y() << " ";
    };

    virtual float calcular_area() = 0;
};

class Retangulo : public FiguraGeometrica {
private:
    int lado1;
    int lado2;

public:
    Retangulo(int x, int y, int lado1, int lado2) : FiguraGeometrica(x, y), lado1(lado1), lado2(lado2) {
    }

    void set_lados(int l1, int l2) {
        this->lado1 = l1;
        this->lado2 = l2;
    };

    void desenha() {
        FiguraGeometrica::desenha();
        cout << "RETANGULO" << endl;
    };

    float calcular_area() {
        return (this->lado1) * (this->lado2);
    };
};

class Circulo : public FiguraGeometrica {
private:
    int raio;

public:
    Circulo(int x, int y, int raio) : FiguraGeometrica(x, y), raio(raio) {
    }

    void set_raio(int raio) {
        this->raio = raio;
    };

    void desenha() {
        FiguraGeometrica::desenha();
        cout << "CIRCULO" << endl;
    };

    float calcular_area() {
        return 3.141592653589 * (this->raio) * (this->raio);
    };
};

class Triangulo : public FiguraGeometrica {
private:
    int base;
    int altura;

public:
    Triangulo(int x, int y, int lado1, int lado2) : FiguraGeometrica(x, y), base(lado1), altura(lado2) {
    }

    void set_base_altura(int base, int altura) {
        this->base = base;
        this->altura = altura;
    };

    void desenha() {
        FiguraGeometrica::desenha();
        cout << "TRIANGULO" << endl;
    };

    float calcular_area() {
        return (this->base) * (this->altura) / 2;
    };
};

int main() {
    string entrada;
    int cord1, cord2, l1, l2;
    vector<FiguraGeometrica *> vetor_FigGeo;

    while (true) {
        cin >> entrada;

        if (entrada == "R") {
            cin >> cord1 >> cord2 >> l1 >> l2;
            // R <C1> <C2> <L1> <L2>: Cria um retângulo com lados L1 e L2 com centro em C1, C2.

            vetor_FigGeo.push_back(new Retangulo(cord1, cord2, l1, l2));
        } else if (entrada == "C") {
            cin >> cord1 >> cord2 >> l1; // C <C1> <C2> <R>: Cria um círculo de raio R com centro em C1, C2.
            vetor_FigGeo.push_back(new Circulo(cord1, cord2, l1));
        } else if (entrada == "T") {
            cin >> cord1 >> cord2 >> l1 >> l2;
            // T <C1> <C2> <B> <A>: Cria um triângulo de base B e altura A com centro em C1, C2.
            vetor_FigGeo.push_back(new Triangulo(cord1, cord2, l1, l2));
        } else if (entrada == "D") {
            for (auto &figura: vetor_FigGeo) {
                figura->desenha();
                // D:  "Desenha" todas, imprimindo as coordenadas do seu centro e o texto especificado para cada tipo.
            };
        } else if (entrada == "A") {
            float soma = 0; // A: calcula e imprime a área total ocupada por todas as figuras geométricas.
            for (FiguraGeometrica * &figura: vetor_FigGeo) {
                soma += figura->calcular_area();
            };
            cout << "AREA TOTAL: " << soma << endl;
        } else if (entrada == "E") {
            cout << "EXIT" << endl;
            for (FiguraGeometrica* &figura: vetor_FigGeo) {
                delete figura;
            };
            vetor_FigGeo.clear();
            return 0;
        } else {
            cout << "ERRO: Digite uma das letras a seguir: R, C, T, D, A, E" << endl;
        };
    };
};

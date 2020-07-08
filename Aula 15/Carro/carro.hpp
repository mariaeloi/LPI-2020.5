#include <string>
#include "motor.hpp"

class Carro{
    public:
    std::string tipo;
    std::string placa;
    int numPortas;
    int velocidade;
    std::string cor;
    Motor motor;

    static int quantidadeDeCarros;

    Carro();
    Carro(std::string cor);

    void acelera(int velocidade);
    void freia(int velocidade);
    void ligaCarro();
};
#include "carro.hpp"

int Carro::quantidadeDeCarros;

Carro::Carro(){
    this->cor = "Branco";
    quantidadeDeCarros++;
}

Carro::Carro(std::string cor){
    this->cor = cor;
    quantidadeDeCarros++;
}

void Carro::acelera(int velocidade){
    this->velocidade += velocidade;
}

void Carro::freia(int velocidade){
    this->velocidade -= velocidade;
}

void Carro::ligaCarro(){
    motor.partida();
}
#include "seguranca.hpp"

int Seguranca::quantidadeSegurancas;

Seguranca::Seguranca(std::string nome, double salario) : Funcionario(nome, salario)
{
	quantidadeSegurancas++;
}

void Seguranca::setSenhaAcessoCameras(std::string senha) {
	senhaAcessoCameras = senha;
}
std::string Seguranca::getSenhaAcessoCameras() {
	return senhaAcessoCameras;
}

int Seguranca::getQuantidadeSegurancas() {
	return quantidadeSegurancas;
}
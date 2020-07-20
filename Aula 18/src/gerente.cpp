#include "gerente.hpp"

int Gerente::quantidadeGerentes;

Gerente::Gerente(std::string nome, double salario) : Funcionario(nome, salario)
{
	quantidadeGerentes++;
}

void Gerente::setSenhaAcessoGeral(std::string senha) {
	senhaAcessoGeral = senha;
}
std::string Gerente::getSenhaAcessoGeral() {
	return senhaAcessoGeral;
}

int Gerente::getQuantidadeGerentes() {
	return quantidadeGerentes;
}
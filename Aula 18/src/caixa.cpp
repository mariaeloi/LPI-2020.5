#include "caixa.hpp"

int Caixa::quantidadeCaixas;

Caixa::Caixa(std::string nome, double salario) : Funcionario(nome, salario)
{
	quantidadeCaixas++;
}

void Caixa::setSenhaAcessoCaixa(std::string senha) {
	senhaAcessoCaixa = senha;
}
std::string Caixa::getSenhaAcessaCaixa() {
	return senhaAcessoCaixa;
}

int Caixa::getQuantidadeCaixas() {
	return quantidadeCaixas;
}
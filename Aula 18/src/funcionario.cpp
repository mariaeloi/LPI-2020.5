#include "funcionario.hpp"

int Funcionario::quantidadeFuncionarios;

Funcionario::Funcionario(std::string nome, double salario) {
	this->nome = nome;
	this->salario = salario;
	quantidadeFuncionarios++;
}

void Funcionario::setNome(std::string nome) {
	this->nome = nome;
}
std::string Funcionario::getNome() {
	return nome;
}

void Funcionario::setSalario(double salario) {
	this->salario = salario;
}
double Funcionario::getSalario() {
	return salario;
}

int Funcionario::getQuantidadeFuncionarios() {
	return quantidadeFuncionarios;
}
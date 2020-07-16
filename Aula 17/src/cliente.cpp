#include "cliente.hpp"

int Cliente::quantidadeClientes;


Cliente::Cliente() {}
Cliente::Cliente(std::string nome, std::string cpf) : nome(nome), cpf(cpf)
{
	quantidadeClientes++;
}

void Cliente::setNome(std::string nome) {
	this->nome = nome;
}
std::string Cliente::getNome() {
	return nome;
}

void Cliente::setCpf(std::string cpf) {
	this->cpf = cpf;
}
std::string Cliente::getCpf() {
	return cpf;
}

int Cliente::getQuantidadeClientes() {
	return quantidadeClientes;
}
#include "clientePF.hpp"

int ClientePF::quantidadeClientesPF;


ClientePF::ClientePF() {}
ClientePF::ClientePF(std::string nome, std::string CPF, std::string dataCadastro) : Cliente(dataCadastro) {
	this->nome = nome;
	this->CPF = CPF;
	quantidadeClientesPF++;
}

void ClientePF::setNome(std::string nome) {
	this->nome = nome;
}
std::string ClientePF::getNome() {
	return nome;
}

void ClientePF::setCPF(std::string CPF) {
	this->CPF = CPF;
}
std::string ClientePF::getCPF() {
	return CPF;
}

int ClientePF::getQuantidadeClientesPF() {
	return quantidadeClientesPF;
}
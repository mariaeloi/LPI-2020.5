#include "cliente.hpp"

int Cliente::quantidadeClientes;

Cliente::Cliente() {}
Cliente::Cliente(std::string dataCadastro) {
	this->dataCadastro = dataCadastro;
	quantidadeClientes++;
}

void Cliente::setDataCadastro(std::string dataCadastro) {
	this->dataCadastro;
}
std::string Cliente::getDataCadastro() {
	return dataCadastro;
}

void Cliente::setEndereco(std::string endereco) {
	this->endereco = endereco;
}
std::string Cliente::getEndereco() {
	return endereco;
}

void Cliente::setCEP(std::string CEP) {
	this->CEP = CEP;
}
std::string Cliente::getCEP() {
	return CEP;
}

void Cliente::setTelefone(std::string telefone) {
	this->telefone = telefone;
}
std::string Cliente::getTelefone() {
	return telefone;
}

int Cliente::getQuantidadeClientes() {
	return quantidadeClientes;
}
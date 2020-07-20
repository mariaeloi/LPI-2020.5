#include "clientePJ.hpp"

int ClientePJ::quantidadeClientesPJ;

ClientePJ::ClientePJ() {}
ClientePJ::ClientePJ(std::string razaoSocial, std::string CNPJ, std::string dataCadastro) : Cliente(dataCadastro) {
	this->razaoSocial = razaoSocial;
	this->CNPJ = CNPJ;
	quantidadeClientesPJ++;
}

void ClientePJ::setRazaoSocial(std::string razaoSocial) {
	this->razaoSocial = razaoSocial;
}
std::string ClientePJ::getRazaoSocial() {
	return razaoSocial;
}

void ClientePJ::setCNPJ(std::string CNPJ) {
	this->CNPJ = CNPJ;
}
std::string ClientePJ::getCNPJ() {
	return CNPJ;
}

int ClientePJ::getQuantidadeClientesPJ() {
	return quantidadeClientesPJ;
}
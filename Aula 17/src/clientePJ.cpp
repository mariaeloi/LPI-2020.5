#include "clientePJ.hpp"

int ClientePJ::quantidadeClientesPJ;

ClientePJ::ClientePJ() {}
ClientePJ::ClientePJ(std::string razaoSocial, std::string cnpj) : razaoSocial(razaoSocial), cnpj(cnpj)
{
	quantidadeClientesPJ++;
}

void ClientePJ::setRazaoSocial(std::string razaoSocial) {
	this->razaoSocial = razaoSocial;
}
std::string ClientePJ::getRazaoSocial() {
	return razaoSocial;
}

void ClientePJ::setCnpj(std::string cnpj) {
	this->cnpj = cnpj;
}
std::string ClientePJ::getCnpj() {
	return cnpj;
}

int ClientePJ::getQuantidadeClientesPJ() {
	return quantidadeClientesPJ;
}
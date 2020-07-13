#include "empresa.hpp"

Empresa::Empresa(std::string nome, std::string CNPJ) : nome(nome), CNPJ(CNPJ)
{
}

void Empresa::setNome(std::string nome) {
	this->nome = nome;
}
std::string Empresa::getNome() {
	return nome;
}

void Empresa::setCNPJ(std::string CNPJ) {
	this->CNPJ = CNPJ;
}
std::string Empresa::getCNPJ() {
	return CNPJ;
}
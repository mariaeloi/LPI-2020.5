#include "agencia.hpp"

Agencia::Agencia() {}

Agencia::Agencia(std::string nome, std::string numero) : nome(nome), numeroDaAgencia(numero)
{
}

void Agencia::setNome(std::string nome) {
	this->nome = nome;
}
std::string Agencia::getNome() {
	return nome;
}

void Agencia::setNumeroDaAgencia(std::string numeroDaAgencia) {
	this->numeroDaAgencia = numeroDaAgencia;
}
std::string Agencia::getNumeroDaAgencia() {
	return numeroDaAgencia;
}
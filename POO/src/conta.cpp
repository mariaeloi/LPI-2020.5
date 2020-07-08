#include "conta.hpp"

#include <iostream>

Conta::Conta(Cliente c, Agencia a, std::string n) : titular(c), agencia(a), numeroDaConta(n), saldo(0)
{
}

Conta::Conta(Cliente c, Agencia a, std::string n, double valor) : titular(c), agencia(a), numeroDaConta(n), saldo(valor)
{
}

void Conta::saca(double valor) {
	if (valor > saldo) {
		std::cout << "Saldo insuficiente.\n";
		return;
	}

	saldo -= valor;
	std::cout << "Saque feito com sucesso.\n";
}

void Conta::deposita(double valor) {
	saldo += valor;
	std::cout << "Depósito feito com sucesso.\n";
}

void Conta::transfere(double valor, Conta& c) {
	if (valor > saldo) {
		std::cout << "Saldo insuficiente.\n";
		return;
	}

	saldo -= valor;
	c.saldo += valor;
	std::cout << "Transferência feita com sucesso.\n";
}
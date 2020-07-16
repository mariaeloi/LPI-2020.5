#include "conta.hpp"
#include <iostream>
#include <sstream>

int Conta::quantidadeContas;

Conta::Conta(Cliente c, Agencia a, std::string n) : titular(c), agencia(a), numeroDaConta(n), saldo(0)
{
	quantidadeContas++;
}

Conta::Conta(Cliente c, Agencia a, std::string n, double valor) : titular(c), agencia(a), numeroDaConta(n), saldo(valor)
{
	quantidadeContas++;
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

std::string Conta::to_string() {
	std::stringstream conta;

	conta << "Número da conta: " << numeroDaConta << std::endl;
	conta << "Titular: " << titular.getNome() << std::endl;
	conta << "CPF: " << titular.getCpf() << std::endl;
	conta << "Agência: " << agencia.getNome() << " - " << agencia.getNumeroDaAgencia() << std::endl;
	conta << "Saldo: " << saldo << std::endl;

	return conta.str();
}
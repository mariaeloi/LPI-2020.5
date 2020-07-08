#include <iostream>
#include "conta.hpp"

void mostrarConta(const Conta& c) {
	std::cout << "# Número da conta: " << c.numeroDaConta << std::endl;
	std::cout << "  Titular: " << c.titular.nome << std::endl;
	std::cout << "  CPF: " << c.titular.cpf << std::endl;
	std::cout << "  Número da conta: " << c.numeroDaConta << std::endl;
	std::cout << "  Agência: " << c.agencia.nome << " - " << c.agencia.numeroDaAgencia << std::endl;
	std::cout << "  Saldo: " << c.saldo << std::endl;
}

int main(int argc, char const *argv[]) {
	Cliente cliente1("Maria", "77777777777");
	Cliente cliente2("Helena", "11122233344");

	Agencia agencia("X", "0000");

	Conta conta1(cliente1, agencia, "13613", 777.77);
	Conta conta2(cliente2, agencia, "32209");

	mostrarConta(conta1);
	mostrarConta(conta2);

	conta2.saca(100.00);
	conta1.transfere(777.78, conta2);
	conta1.transfere(130.60, conta2);

	mostrarConta(conta1);
	mostrarConta(conta2);

	conta2.deposita(300.00);
	mostrarConta(conta2);

	std::cout << std::endl;
	std::cout << "Quantidade de contas: " << conta1.quantidadeDeContas << std::endl;
	std::cout << "Quantidade de clientes: " << cliente1.quantidadeDeClientes << std::endl;

	return 0;
}
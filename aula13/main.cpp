#include <iostream>
#include "conta.hpp"

void mostrarConta(const Conta& c) {
	std::cout << "# Número da conta: " << c.numero << std::endl;
	std::cout << "  Titular: " << c.titular << std::endl;
	std::cout << "  Saldo: " << c.saldo << std::endl;
}

int main(int argc, char const *argv[]) {
	Conta conta1("Maria", "13613", 777.77);
	Conta conta2("Helena", "32209");

	mostrarConta(conta1);
	mostrarConta(conta2);

	conta2.saca(100.00);
	conta1.transfere(777.78, conta2);
	conta1.transfere(130.60, conta2);

	mostrarConta(conta1);
	mostrarConta(conta2);

	conta2.deposita(300.00);
	mostrarConta(conta2);

	return 0;
}
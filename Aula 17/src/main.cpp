#include <iostream>
#include "conta.hpp"
#include "clientePJ.hpp"
#include "fila.hpp"

int main(int argc, char const *argv[]) {
	Cliente cliente1("Maria", "777.777.777-77");
	Cliente cliente2("Helena", "111.222.333-44");

	Agencia agencia("X", "0000");
	Fila<Cliente> fila(2);

	if (fila.isEmpty()) {
		std::cout << "Fila vazia" << std::endl;
	}

	fila.push(cliente2);
	fila.push(cliente1);

	Conta conta1(fila.back(), agencia, "13613", 777.77);
	std::cout << conta1.to_string() << std::endl;
	fila.pop();

	Conta conta2(fila.back(), agencia, "32209");
	std::cout << conta2.to_string() << std::endl;
	fila.pop();

	conta2.saca(100.00);
	conta1.transfere(777.78, conta2);
	conta1.transfere(130.60, conta2);
	std::cout << conta1.to_string() << std::endl;
	std::cout << conta2.to_string() << std::endl;
	conta2.deposita(300.00);
	std::cout << conta2.to_string() << std::endl;

	ClientePJ pj1("Smeraldo", "20.130.613/XXXX-XX");
	ClientePJ pj2("Y", "19.930.309/XXXX-XX");

	Fila<ClientePJ> filaPJ(5);
	filaPJ.push(pj1);
	filaPJ.push(pj2);

	std::cout << std::endl;
	std::cout << "Quantidade de contas: " << conta1.quantidadeContas << std::endl;
	std::cout << "Quantidade de clientes: " << cliente1.getQuantidadeClientes() << std::endl;
	std::cout << "Quantidade de clientes(PJ): " << pj1.getQuantidadeClientesPJ() << std::endl;

	return 0;
}
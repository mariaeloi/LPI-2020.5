#include <iostream>
#include "conta.hpp"
#include "clientePF.hpp"
#include "clientePJ.hpp"
#include "fila.hpp"
#include "gerente.hpp"
#include "caixa.hpp"
#include "seguranca.hpp"

int main(int argc, char const *argv[]) {
	ClientePF cliente1("Maria", "777.777.777-77", "20/07/2020");
	ClientePF cliente2("Helena", "111.222.333-44", "20/07/2020");
	std::cout << "Nome do cliente: " << cliente1.getNome() << " - Data de cadastro: " << cliente1.getDataCadastro() << std::endl;

	Agencia agencia("X", "0000");
	Fila<ClientePF> fila(2);

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

	ClientePJ pj1("Smeraldo", "20.130.613/XXXX-XX", "13/06/2013");
	ClientePJ pj2("Y", "19.930.309/XXXX-XX", "09/03/1993");

	Fila<ClientePJ> filaPJ(5);
	filaPJ.push(pj1);
	filaPJ.push(pj2);

	std::cout << std::endl;
	std::cout << "Quantidade de contas: " << conta1.quantidadeContas << std::endl;
	std::cout << "Quantidade de clientes: " << cliente1.getQuantidadeClientes() << std::endl;
	std::cout << "Quantidade de clientes(PF): " << cliente1.getQuantidadeClientesPF() << std::endl;
	std::cout << "Quantidade de clientes(PJ): " << pj1.getQuantidadeClientesPJ() << std::endl;
	std::cout << "\n#######\n" << std::endl;

	Gerente gerente("Gerente1", 3000);
	gerente.setSenhaAcessoGeral("1306");
	std::cout << "Gerente:\n  Nome: " << gerente.getNome() << std::endl;
	std::cout << "  Salário: " << gerente.getSalario() << std::endl;
	std::cout << "  Senha de acesso geral: " << gerente.getSenhaAcessoGeral() << std::endl;

	Caixa caixa1("Caixa1", 2000);
	Caixa caixa2("Caixa2", 2000);
	Caixa caixa3("Caixa3", 2000);
	Seguranca seguranca1("Segunraça1", 2000);
	Seguranca seguranca2("Seguranca2", 2000);

	std::cout << std::endl;
	std::cout << "Quantidade de funcionários: " << gerente.getQuantidadeFuncionarios() << std::endl;
	std::cout << "Quantidade de gerentes: " << gerente.getQuantidadeGerentes() << std::endl;
	std::cout << "Quantidade de caixas: " << caixa1.getQuantidadeCaixas() << std::endl;
	std::cout << "Quantidade de seguranças: " << seguranca1.getQuantidadeSegurancas() << std::endl;

	return 0;
}
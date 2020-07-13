#include <vector>
#include <iostream>
#include "empresa.hpp"
#include "funcionario.hpp"

int main(int argc, char const *argv[])
{
	Empresa empresa("EMPRESA", "XX.XXX.XXX/XXXX-XX");
	std::cout << "Empresa: " << empresa.getNome() << " - " << empresa.getCNPJ() << std::endl;

	int quantidadeFuncionarios;
	std::cout << "Informe a quantidade de funcionários: ";
	std::cin >> quantidadeFuncionarios;

	std::string nome = "test";
	std::string departamento;

	std::vector<Funcionario> funcionarios;

	for (int i = 0; i < quantidadeFuncionarios; ++i)
	{
		if (i%2 == 0) {
			departamento = "A";

		} else {
			departamento = "B";
		}

		nome+="e";

		Funcionario f(nome, empresa.getNome(), departamento, 600+10*i, "XX/XX/XXXX");
		funcionarios.push_back(f);
	}
	for (auto f : funcionarios) {
		std::cout << "#Nome: " << f.getNome() << std::endl;
		std::cout << "  Empresa: " << f.getEmpresa() << std::endl;
		std::cout << "  Departamento: " << f.getDepartamento() << std::endl;
		std::cout << "  Salário: " << f.getSalario() << std::endl;
		std::cout << "  Data de admissão: " << f.getDataAdmissao() << std::endl;
	}

	std::cout << "Todos os funcionários do departamento A receberão um aumento de 10%.\n";
	for (auto f : funcionarios) {
		if (f.getDepartamento() == "A") {
			f.setSalario(f.getSalario()*1.1);
		}
		std::cout << "#Nome: " << f.getNome() << std::endl;
		std::cout << "  Empresa: " << f.getEmpresa() << std::endl;
		std::cout << "  Departamento: " << f.getDepartamento() << std::endl;
		std::cout << "  Salário: " << f.getSalario() << std::endl;
		std::cout << "  Data de admissão: " << f.getDataAdmissao() << std::endl;
	}

	return 0;
}
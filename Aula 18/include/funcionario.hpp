#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

class Funcionario {
protected:
	std::string nome;
	double salario;
	static int quantidadeFuncionarios;
public:
	Funcionario(std::string nome, double salario);
	
	void setNome(std::string nome);
	std::string getNome();

	void setSalario(double salario);
	double getSalario();

	int getQuantidadeFuncionarios();
};

#endif
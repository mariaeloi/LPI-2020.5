#ifndef FUNCIONARI_HPP
#define FUNCIONARI_HPP

#include <string>

class Funcionario
{
private:
	std::string nome;
	std::string empresa;
	std::string departamento;
	double salario;
	std::string dataAdmissao;
public:
	Funcionario(std::string nome, std::string empresa, std::string departamento, double salario, std::string dataAdmissao);

	void setNome(std::string nome);
	std::string getNome();

	void setEmpresa(std::string empresa);
	std::string getEmpresa();

	void setDepartamento(std::string departamento);
	std::string getDepartamento();

	void setSalario(double salario);
	double getSalario();

	void setDataAdmissao(std::string dataAdmissao);
	std::string getDataAdmissao();
};

#endif
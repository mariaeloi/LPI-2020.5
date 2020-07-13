#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <string>

class Empresa
{
private:
	std::string nome;
	std::string CNPJ;
public:
	Empresa(std::string nome, std::string CNPJ);

	void setNome(std::string nome);
	std::string getNome();

	void setCNPJ(std::string CNPJ);
	std::string getCNPJ();
};

#endif
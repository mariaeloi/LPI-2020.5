#ifndef CLIENTEPF_HPP
#define CLIENTEPF_HPP

#include "cliente.hpp"
#include <string>

class ClientePF : public Cliente {
private:
	std::string nome;
	std::string CPF;
	static int quantidadeClientesPF;
public:
	ClientePF();
	ClientePF(std::string nome, std::string CPF, std::string dataCadastro);

	void setNome(std::string nome);
	std::string getNome();

	void setCPF(std::string CPF);
	std::string getCPF();

	int getQuantidadeClientesPF();
};

#endif
#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include "cliente.hpp"
#include <string>

class ClientePJ : public Cliente {
private:
	std::string razaoSocial;
	std::string CNPJ;
	static int quantidadeClientesPJ;
public:
	ClientePJ();
	ClientePJ(std::string razaoSocial, std::string CNPJ, std::string dataCadastro);

	void setRazaoSocial(std::string razaoSocial);
	std::string getRazaoSocial();

	void setCNPJ(std::string CNPJ);
	std::string getCNPJ();

	int getQuantidadeClientesPJ();
};

#endif
#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {
protected:
	std::string dataCadastro;
	std::string endereco;
	std::string CEP;
	std::string telefone;
	static int quantidadeClientes;
public:
	Cliente();
	Cliente(std::string dataCadastro);

	void setDataCadastro(std::string dataCadastro);
	std::string getDataCadastro();

	void setEndereco(std::string endereco);
	std::string getEndereco();

	void setCEP(std::string CEP);
	std::string getCEP();

	void setTelefone(std::string telefone);
	std::string getTelefone();

	int getQuantidadeClientes();
};

#endif
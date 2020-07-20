#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "funcionario.hpp"

class Gerente : public Funcionario {
private:
	std::string senhaAcessoGeral;
	static int quantidadeGerentes;
public:
	Gerente(std::string nome, double salario);
	
	void setSenhaAcessoGeral(std::string senha);
	std::string getSenhaAcessoGeral();

	int getQuantidadeGerentes();
};

#endif
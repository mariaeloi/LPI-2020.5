#ifndef CAIXA_HPP
#define CAIXA_HPP

#include "funcionario.hpp"

class Caixa : public Funcionario {
private:
	std::string senhaAcessoCaixa;
	static int quantidadeCaixas;
public:
	Caixa(std::string nome, double salario);

	void setSenhaAcessoCaixa(std::string senha);
	std::string getSenhaAcessaCaixa();

	int getQuantidadeCaixas();
};

#endif
#ifndef SEGURANCA_HPP
#define SEGURANCA_HPP

#include "funcionario.hpp"

class Seguranca : public Funcionario {
private:
	std::string senhaAcessoCameras;
	static int quantidadeSegurancas;
public:
	Seguranca(std::string nome, double salario);
	
	void setSenhaAcessoCameras(std::string senha);
	std::string getSenhaAcessoCameras();

	int getQuantidadeSegurancas();
};

#endif
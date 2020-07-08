#include "cliente.hpp"

int Cliente::quantidadeDeClientes;

Cliente::Cliente(std::string nome, std::string cpf) : nome(nome), cpf(cpf)
{
	quantidadeDeClientes++;
}
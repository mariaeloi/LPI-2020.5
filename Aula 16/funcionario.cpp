#include "funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string empresa, std::string departamento, double salario, std::string dataAdmissao) :
nome(nome), empresa(empresa), departamento(departamento), salario(salario), dataAdmissao(dataAdmissao)
{	
}

void Funcionario::setNome(std::string nome) {
	this->nome = nome;
}
std::string Funcionario::getNome() {
	return nome;
}

void Funcionario::setEmpresa(std::string empresa) {
	this->empresa = empresa;
}
std::string Funcionario::getEmpresa() {
	return empresa;
}

void Funcionario::setDepartamento(std::string departamento) {
	this->departamento = departamento;
}
std::string Funcionario::getDepartamento() {
	return departamento;
}

void Funcionario::setSalario(double salario) {
	this->salario = salario;
}
double Funcionario::getSalario() {
	return salario;
}

void Funcionario::setDataAdmissao(std::string dataAdmissao) {
	this->dataAdmissao = dataAdmissao;
}
std::string Funcionario::getDataAdmissao() {
	return dataAdmissao;
}
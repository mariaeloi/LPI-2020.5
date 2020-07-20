#include "agencia.hpp"
#include "clientePF.hpp"

class Conta {
public:
	ClientePF titular;
	Agencia agencia;
	std::string numeroDaConta;
	double saldo;
	static int quantidadeContas;

	Conta(ClientePF c, Agencia a, std::string n);
	Conta(ClientePF c, Agencia a, std::string n, double valor);

	void saca(double valor);
	void deposita(double valor);
	void transfere(double valor, Conta& c);

	std::string to_string();
};
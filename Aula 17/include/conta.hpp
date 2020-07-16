#include "agencia.hpp"
#include "cliente.hpp"

class Conta {
public:
	Cliente titular;
	Agencia agencia;
	std::string numeroDaConta;
	double saldo;
	static int quantidadeContas;

	Conta(Cliente c, Agencia a, std::string n);
	Conta(Cliente c, Agencia a, std::string n, double valor);

	void saca(double valor);
	void deposita(double valor);
	void transfere(double valor, Conta& c);

	std::string to_string();
};
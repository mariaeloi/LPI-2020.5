#include "agencia.hpp"
#include "cliente.hpp"

class Conta {
public:
	Conta(Cliente c, Agencia a, std::string n);
	Conta(Cliente c, Agencia a, std::string n, double valor);

	Cliente titular;
	Agencia agencia;
	std::string numeroDaConta;
	double saldo;

	void saca(double valor);
	void deposita(double valor);
	void transfere(double valor, Conta& c);
};
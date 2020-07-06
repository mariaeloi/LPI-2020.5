#include <string>

class Conta {
	public:
		Conta(std::string nome, std::string n);
		Conta(std::string nome, std::string n, double valor);

		std::string titular;
		std::string numero;
		double saldo;

		void saca(double valor);
		void deposita(double valor);
		void transfere(double valor, Conta& c);
};
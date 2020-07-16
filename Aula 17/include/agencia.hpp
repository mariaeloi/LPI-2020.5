#include <string>

class Agencia {
private:
	std::string nome;
	std::string numeroDaAgencia;
public:
	Agencia();
	Agencia(std::string nome, std::string numero);

	void setNome(std::string nome);
	std::string getNome();

	void setNumeroDaAgencia(std::string numeroDaAgencia);
	std::string getNumeroDaAgencia();
};
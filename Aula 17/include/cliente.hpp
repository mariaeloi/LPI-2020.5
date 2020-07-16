#include <string>

class Cliente {
private:
	std::string nome;
	std::string cpf;
	static int quantidadeClientes;
public:
	Cliente();
	Cliente(std::string nome, std::string cpf);

	void setNome(std::string nome);
	std::string getNome();

	void setCpf(std::string cpf);
	std::string getCpf();

	int getQuantidadeClientes();
};
#include <string>

class ClientePJ {
private:
	std::string razaoSocial;
	std::string cnpj;
	static int quantidadeClientesPJ;
public:
	ClientePJ();
	ClientePJ(std::string razaoSocial, std::string cnpj);

	void setRazaoSocial(std::string razaoSocial);
	std::string getRazaoSocial();

	void setCnpj(std::string cnpj);
	std::string getCnpj();

	int getQuantidadeClientesPJ();
};
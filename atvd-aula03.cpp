#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char const *argv[])
{
	std::string mensagem;
	std::string add = "add";

	if(argc == 1 || argv[1] != add){
		std::cout << "Uso:   " << argv[0] << " add <mensagem>\n";
		return 7;
	}
	else if(argc == 2){
		std::cout << "Informe a mensagem: ";
		std::getline(std::cin, mensagem);
		std::cout << "Mensagem adicionada.\n";
	}
	else{
		mensagem = argv[2];
		std::cout << "Mensagem adicionada.\n";
	}

	std::ofstream arquivo_saida("mensagem.txt");
	arquivo_saida << mensagem;
	arquivo_saida.close();	

	return 0;
}
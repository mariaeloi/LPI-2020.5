#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string mensagem;
	std::string add = "add";

	if(argc == 1 || argv[1] != add){
		std::cout << "Uso:   " << argv[0] << " add <mensagem>\n";
	}
	else if(argc == 2){
		std::cout << "Informe a mensagem: ";
		std::getline(std::cin, mensagem);
		std::cout << "Mensagem adicionada: " << mensagem << std::endl;
	}
	else{
		std::cout << "Mensagem adicionada: " << argv[2] << std::endl;
	}

	return 0;
}
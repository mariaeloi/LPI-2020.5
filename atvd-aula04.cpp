#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char const *argv[])
{
	if(argc==1 || (std::string(argv[1])!="add" && std::string(argv[1])!="list")){
		std::cout << "Usos:   " << argv[0] << " add <mensagem>\n" <<
					 "        " << argv[0] << " list\n";
		return 1;
	}

	std::string mensagem;
	std::fstream arquivo_saida("mensagem.txt", std::ios::in | std::ios::app); //append
	if(!arquivo_saida.is_open()) {
		std::cerr << "Arquivo sem permissão de uso.\n";
		return 1;
	}

	if(std::string(argv[1])=="list"){
		int linha = 0;
		while(!arquivo_saida.eof()){
			++linha;
			std::getline(arquivo_saida, mensagem);
			if(!mensagem.size() == 0){
				std::cout << linha << ". " << mensagem << std::endl;
			}
		}
	}
	else{
		if(argc==2){
			std::cout << "Informe a mensagem: ";
			std::getline(std::cin, mensagem);
		}
		else{
			mensagem = argv[2];
		}

		arquivo_saida << mensagem << std::endl;
		std::cout << "Mensagem adicionada.\n";
	}

	return 0;
}
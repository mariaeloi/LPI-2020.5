#include "../include/app.h"

int main(int argc, char const *argv[]) { 
	
	App aplicativo("diary.md");
	
	return aplicativo.run(argc, argv);
}
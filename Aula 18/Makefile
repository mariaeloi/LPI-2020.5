GCC = g++
GCC_FLAGS = -I include -std=c++11
PROGRAMA = a.out

all: $(PROGRAMA)

$(PROGRAMA): main.o conta.o agencia.o cliente.o clientePF.o clientePJ.o funcionario.o gerente.o caixa.o seguranca.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAMA) main.o conta.o agencia.o cliente.o clientePF.o clientePJ.o funcionario.o gerente.o caixa.o seguranca.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

conta.o: src/conta.cpp include/conta.hpp
	$(GCC) $(GCC_FLAGS) -c src/conta.cpp

agencia.o: src/agencia.cpp include/agencia.hpp
	$(GCC) $(GCC_FLAGS) -c src/agencia.cpp

cliente.o: src/cliente.cpp include/cliente.hpp
	$(GCC) $(GCC_FLAGS) -c src/cliente.cpp
	
clientePF.o: src/clientePF.cpp include/clientePF.hpp
	$(GCC) $(GCC_FLAGS) -c src/clientePF.cpp
	
clientePJ.o: src/clientePJ.cpp include/clientePJ.hpp
	$(GCC) $(GCC_FLAGS) -c src/clientePJ.cpp
	
funcionario.o: src/funcionario.cpp include/funcionario.hpp
	$(GCC) $(GCC_FLAGS) -c src/funcionario.cpp

gerente.o: src/gerente.cpp include/gerente.hpp
	$(GCC) $(GCC_FLAGS) -c src/gerente.cpp
	
caixa.o: src/caixa.cpp include/caixa.hpp
	$(GCC) $(GCC_FLAGS) -c src/caixa.cpp
	
seguranca.o: src/seguranca.cpp include/seguranca.hpp
	$(GCC) $(GCC_FLAGS) -c src/seguranca.cpp

clean:
	rm -f *.o

.PHONY: all

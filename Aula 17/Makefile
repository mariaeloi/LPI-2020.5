GCC = g++
GCC_FLAGS = -I include -std=c++11
PROGRAMA = a.out

all: $(PROGRAMA)

$(PROGRAMA): main.o conta.o agencia.o cliente.o clientePJ.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAMA) main.o conta.o agencia.o cliente.o clientePJ.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

conta.o: src/conta.cpp include/conta.hpp
	$(GCC) $(GCC_FLAGS) -c src/conta.cpp

agencia.o: src/agencia.cpp include/agencia.hpp
	$(GCC) $(GCC_FLAGS) -c src/agencia.cpp

cliente.o: src/cliente.cpp include/cliente.hpp
	$(GCC) $(GCC_FLAGS) -c src/cliente.cpp
	
clientePJ.o: src/clientePJ.cpp include/clientePJ.hpp
	$(GCC) $(GCC_FLAGS) -c src/clientePJ.cpp

clean:
	rm -f *.o

.PHONY: all

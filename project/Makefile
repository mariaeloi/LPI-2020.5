GCC = g++
GCC_FLAGS = -I include -std=c++11
PROGRAMA = diary

all: $(PROGRAMA)

$(PROGRAMA): main.o app.o diary.o date.o Time.o getDateTime.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAMA) main.o app.o diary.o date.o Time.o getDateTime.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

app.o: src/app.cpp include/app.h
	$(GCC) $(GCC_FLAGS) -c src/app.cpp

diary.o: src/diary.cpp include/diary.h
	$(GCC) $(GCC_FLAGS) -c src/diary.cpp

date.o: src/date.cpp include/date.h
	$(GCC) $(GCC_FLAGS) -c src/date.cpp

Time.o: src/Time.cpp include/Time.h
	$(GCC) $(GCC_FLAGS) -c src/Time.cpp

getDateTime.o: src/getDateTime.cpp include/getDateTime.h
	$(GCC) $(GCC_FLAGS) -c src/getDateTime.cpp

clean:
	rm -f *.o

.PHONY: all

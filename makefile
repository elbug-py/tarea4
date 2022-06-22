CC=g++
ex=lab5
flags=-std=c++11 -Wall -Wextra -Wundef -Werror -Wuninitialized -Winit-self

grafo: grafo.o main.o
	$(CC) $(flags) main.o grafo.o -o $(ex)

grafo.o: grafo.h grafo.cpp
	$(CC) $(flags) -c grafo.cpp -o grafo.o

main.o: main.cpp
	$(CC) $(flags) -c main.cpp -o main.o

run: $(ex)
	./$(ex)

clean:
	rm *.o *.exe
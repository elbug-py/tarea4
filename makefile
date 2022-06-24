CC=g++
ex=lab5
rutapython=/usr/include/python3.10

libreria: _grafo.so

_grafo.so:grafo_wrap.cxx grafo.o
	$(CC) -fPIC -c grafo_wrap.cxx -o lib_wrap.o -I$(rutapython)
	$(CC) -shared lib_wrap.o grafo.o -o _grafo.so


grafo_wrap.cxx: grafo.i grafo.h
	swig  -python -c++ grafo.i

grafo: grafo.o main.o
	$(CC)  main.o grafo.o -o $(ex)

grafo.o: grafo.h grafo.cpp
	$(CC)  -c grafo.cpp -o grafo.o

main.o: main.cpp
	$(CC)  -c main.cpp -o main.o

run: $(ex)
	./$(ex)

clean:
	rm -f *.o $(exe) *.pyc *.pyd *.cxx libpbn.py
	rm -r -f __pycache__

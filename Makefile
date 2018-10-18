run: bin
	./bin

bin: bin.c
	gcc -Wall -std=c11 bin.c -o bin

build: bin

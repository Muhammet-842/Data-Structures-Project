all:derle bagla calistir

derle:
	
	g++ -c -I "./include" ./src/ReadFile.cpp -o ./lib/ReadFile.o
	g++ -c -I "./include" ./src/BinarySearchTree.cpp -o ./lib/BinarySearchTree.o
	g++ -c -I "./include" ./src/Tissue.cpp -o ./lib/Tissue.o
	g++ -c -I "./include" ./src/Cell.cpp -o ./lib/Cell.o
	g++ -c -I "./include" ./src/Control.cpp -o ./lib/Control.o
	g++ -c -I "./include" ./src/Organ.cpp -o ./lib/Organ.o
	g++ -c -I "./include" ./src/Organism.cpp -o ./lib/Organism.o
	g++ -c -I "./include" ./src/Queue.cpp -o ./lib/Queue.o
	g++ -c -I "./include" ./src/Radix.cpp -o ./lib/Radix.o
	g++ -c -I "./include" ./src/System.cpp -o ./lib/System.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o

bagla:
	g++  ./lib/ReadFile.o ./lib/BinarySearchTree.o ./lib/Tissue.o ./lib/Cell.o ./lib/Control.o ./lib/Organ.o ./lib/Organism.o ./lib/Queue.o ./lib/Radix.o ./lib/System.o  ./lib/main.o -o ./bin/program

calistir:
	./bin/program	
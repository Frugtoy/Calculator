all: lay
lay: node.o stack.o sort_machine.o main.o
	g++ node.o stack.o sort_machine.o main.o -o lay
node.o:node.cpp
	g++ -c node.cpp
stack.o:stack.cpp
	g++ -c stack.cpp
sort_machine.o:sort_machine.cpp
	g++ -c sort_machine.cpp
main.o:main.cpp
	g++ -c main.cpp

clean:
	rm *.o lay
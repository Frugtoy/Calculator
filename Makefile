all: lay

lay: node.o stack.o main.o
	g++ node.o stack.o main.o -o lay
node.o:node.cpp
	g++ -c node.cpp

stack.o:stack.cpp
	g++ -c stack.cpp

main.o:main.cpp
	g++ -c main.cpp

clean:
	rm *.o lay
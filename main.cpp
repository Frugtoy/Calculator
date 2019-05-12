#include<iostream>
#include "stack.cpp"

int main(int argc, char ** argv) {

    Stack<int> s;
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1221);
    while (s.get_tail()!=nullptr)
    std::cout<< " " <<s.pop() << std::endl;
    return 0;
}
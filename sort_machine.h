#ifndef SORTINGSTATION
#define SORTINGSTATION
#include <string>
#include "stack.cpp"
#include"token.h"



class SortingStation {
    public:
        Stack<Token> parse(std::string str);
    private:
        bool checkIfOperator(char sym);
        prio check_priority(char oper);
        
        Stack<Token>stack;
        Stack<Token>out;


};

#endif
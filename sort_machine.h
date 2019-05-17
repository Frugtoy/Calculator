#ifndef SORTINGSTATION
#define SORTINGSTATION
#include <string>
#include "stack.h"
#include "gueue.h"
#include"token.h"



class SortingStation {
    public:
        Queue<Token> parse(std::string str);
    private:
        bool checkIfOperator(char sym);
        prio check_priority(char oper);
        
        Stack<Token>stack;
        Queue<Token>out;


};

#endif
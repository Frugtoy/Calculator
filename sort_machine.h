#ifndef SORTINGSTATION
#define SORTINGSTATION
#include <string>
#include "stack.cpp"
#include"token.h"



class SortingStation {
    public:
        void parse(std::string str);

    private:
        bool checkIfOperator(char sym);
        prio checkOperator(char oper);
            Stack<Token>stack;
            Stack<Token>out;


};

#endif
#ifndef SORTINGSTATION
#define SORTINGSTATION
#include <string>
#include "stack.cpp"

enum priority {
    VERYLOW = 0,
    LOW,
    MEDIUM,
    HIGH,
    VERYHIGH

};

class SortingStation {
    public:
        void parse(std::string str);

    private:
        bool checkIfOperator(char sym);
        priority checkOperator(char oper);
        Stack<char> stack;


};

#endif
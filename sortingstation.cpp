#include "sortingstation.h"

void SortingStation::parse(std::string str) {
    bool flag = false;

    for(int i = 0; i < str.size(); i++) {
        if (checkIfOperator(str[i])) {
            if(checkOperator(str[i]) == VERYLOW) {
                stack.push(str[i]);
                if(!flag) {
                    flag = true;
                } else {
                    stack.pop();
                    while(checkOperator(stack.pick()) != VERYLOW) {
                        out.push_back(stack.pop());
                    }
                    flag = false;
                }
            } else if (checkOperator(str[i]) == LOW) {
                stack.push(str[i]);

            } else if (checkOperator(str[i]) == MEDIUM && checkOperator(stack.pick()) == MEDIUM) {
                out.push_back(stack.pop());
                stack.push(str[i]);
            } 
        }
        else {
            out.push_back(str[i]);
        }
    }
}

bool SortingStation::checkIfOperator(char sym) {
    if(sym == '+' ||
        sym == '-' ||
        sym == '*' ||
        sym == '/' ||
        sym == '(' ||
        sym == ')') {
            return true;
        }
    return false;
}

priority SortingStation::checkOperator(char oper) {
    switch(oper) {
        case '+':
            return LOW;
        case '-':
            return LOW;
        case '*':
            return MEDIUM;
        case '/':
            return MEDIUM;
        case '(':
            return VERYLOW;
        case ')':
            return VERYLOW;
    }
}
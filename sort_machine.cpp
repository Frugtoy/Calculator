#include "sort_machine.h"
#include<iostream>
void SortingStation::parse(std::string str) {
    bool flag = false;
//2+2*2
    Token k;
    for(int i = 0; i < str.size(); i++) {
        if (checkIfOperator(str[i])) {
            if(checkOperator(str[i]) == VERYLOW) {
                k.data = str[i];
                std::cout<<k.data;
                k.priority=  checkOperator(str[i]);
                stack.push(k);
                if(!flag) {
                    flag = true;
                } else {
                    stack.pop();
                    while(checkOperator(stack.pick().priority) != VERYLOW) {
                        std::cout<<stack.pick().data;
                        out.push(stack.pop());
                    }
                    flag = false;
                }
            } else if (checkOperator(str[i]) == LOW) {
                k.data=str[i];
                k.priority = checkOperator(str[i]);
                stack.push(k);

            } else if (checkOperator(str[i]) == MEDIUM && checkOperator(stack.pick().priority) == MEDIUM) {
                out.push(stack.pop());
                k.data=str[i];
                std::cout<<k.data;
                k.priority = checkOperator(str[i]);
                stack.push(k);
            } else if (checkOperator(str[i] == MEDIUM)) {
               // out.push(stack.pop());
                k.data = str[i];
                
                k.priority = checkOperator(str[i]);
                stack.push(k);
            } 
        }
        else {
             k.data=str[i];
             std::cout<<k.data;
             k.priority = checkOperator(str[i]);
             out.push(k);
        }
    }
    while(stack.get_tail()!=nullptr)
    {
        std::cout<<stack.pick().data;
        out.push(stack.pop());
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

prio SortingStation::checkOperator(char oper) {
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
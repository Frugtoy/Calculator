#include "sort_machine.h"
#include<iostream>
using std::cout;

prio SortingStation::check_priority(char oper) {
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
        case '^':
            return HIGH;
        default  :
            return NUMB;
    }
}
using std::cout;
Stack<Token> SortingStation::parse(std::string str) 
{
    Token k;
    for(int i = 0; i < str.size(); i++) 
    {
        k.data = str[i];
        k.priority = check_priority(str[i]);
        if (check_priority(str[i]) != NUMB)
        {
            
          /*  if(k.priority == VERYLOW)
            {
                if(str[i] == '(')
                {
                    if(stack.get_tail()!=nullptr)
                    {
                        stack.pick().priority = VERYLOW;
                    }
                }
                else
                {
                    stack.pick().priority = VERYHIGH;
                }
                
            }*/
          //  else
            //{
                if(stack.is_empty() || k.priority > stack.pick().priority)
                {
                    stack.push(k);
                }
                else
                {
                     out.push(stack.pop());
                     stack.push(k);
                     cout<<out.pick().data;
                }
            //}
        }
        else
        { 
            if(out.get_tail() == nullptr || check_priority(str[i-1]) != NUMB)
            {
                out.push(k);
                cout<<out.pick().data;
            }
            else
            {
               out.pick().data += k.data;
            }
        }
    }
    while(!this->stack.is_empty())
    {
       this->out.push(this->stack.pop());
         cout<<this->out.pick().data;
    }        
    return this->out; 
} 


























































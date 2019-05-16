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
    size_t pushed =0 ;
    Token k;
    bool flag = false;
    for(int i = 0; i < str.size(); i++) 
    {
        k.data = str[i];
        k.priority = check_priority(str[i]);
        if (check_priority(str[i]) != NUMB)
        {
            
            if(k.priority == VERYLOW)
            {
                if(str[i] == '(')
                {
                    flag = true;
                    pushed = 0;
                }
                else
                {
                    flag =false;
                }
                
            }
            else
            {
                if( (flag == true&& pushed == 0) )
                {
                    stack.push(k);
                     pushed++;
                }
                else if((stack.is_empty()|| k.priority > stack.pick().priority)&& pushed != 1 )
                {
                    stack.push(k);
                }
                else
                {
                     out.push(stack.pop());
                     stack.push(k);
                     cout<<out.pick().data;
                     pushed=0;
                     flag =false;
                }
             }
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


























































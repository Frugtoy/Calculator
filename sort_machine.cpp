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
        default  :
            return NUMB;
    }
}
Stack<Token> SortingStation::parse(std::string str) 
{//2+2*2 --->  222*+
    Token k;
    size_t skobchka = 0;
    prio t = LOW;
    prio n = HIGH;
    //cout<<str.size()<<std::endl;
    for(int i = 0; i < str.size(); i++) 
    {
        if (check_priority(str[i])!=NUMB) 
        {
             k.data=str[i];
             k.priority = check_priority(str[i]);
            if(this->stack.get_tail()!= nullptr)
            {
                if(k.priority > this->stack.pick().priority)
                {
                 this->stack.push(k);
                 
                }
                else if(k.priority <= this->stack.pick().priority && k.priority!=VERYLOW)
                {
                  this->out.push(this->stack.pop());  
                  cout<<this->out.pick().data;
                }
                else if(str[i]=='(')
                {
                   this->stack.push(k);
                   skobchka++;
                   
                }
                else if(skobchka!=0)
                {
                  while(this->stack.pick().data[0]!='(')
                  {
                    this->out.push(this->stack.pick());
                    cout<</*"("<<*/this->out.pick().data;
                  }
                  stack.pop();
                  skobchka--;
                }
            }
            else
            {
                this->stack.push(k);
            }
        }
        else if(check_priority (str[i])== NUMB)
        {
           k.priority= NUMB;
         if( (i < str.size()-1&&check_priority(str[i+1])!= NUMB)||(check_priority(str[i-1]!=NUMB)) )
         {
           k.data = str[i];
           this->out.push(k);
           cout<</*"NUMB"<<i<<*/this->out.pick().data<<std::endl;
         }
          else
           k.data+=str[i];

        }
    }
    while(!this->stack.is_empty())
    {
       this->out.push(this->stack.pop());
         cout<<this->out.pick().data<<std::endl;
    }        
    return this->out; 
} 

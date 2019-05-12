
#include<iostream>
#include "stack.cpp"
using std::cin;
using std::cout;
using std::endl;



int main()
{
    Stack <int>s;
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1221);
    while (s.get_tail()!=nullptr)
    cout<<" "<<s.pop()<<endl;
return 0;
}
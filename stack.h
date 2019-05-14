#pragma once
#include "node.cpp"
#include <exception>
typedef int  T;
class Stack
{
public:
  Stack();
  void push( T new_val );
  T pop();
  T pick();
  Node* get_tail (){return this->_tail;}
  ~Stack(){};
private:
  Node* _tail;
};

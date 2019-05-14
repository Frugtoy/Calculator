//#include "stack.h"
#pragma once
#include <exception>
#include<stdexcept>
#include "node.cpp"
template<typename M>
class Stack
{
public:
Stack()
{
 this-> _tail =nullptr;
}
Node<M>* get_tail (){return this->_tail;}

void push(M new_val)
{
  Node<M> * new_node = new Node<M> (new_val , this->_tail);
  this->_tail = new_node;
}
bool is_empty()
{
  if (this->_tail==nullptr)
    return true;
  return false;
}
 
M pop()
{

   if(this->_tail  == nullptr)
   {
       throw std::logic_error("stack is empty");
   }
     M val = this->_tail->get_value();
     Node<M> * ptr = this->_tail;
     this->_tail = this->_tail->getNext();
     delete ptr;
 return val;
}
  M pick()
 {
   return this->_tail->get_value();
 }
  private:
  Node<M>* _tail; 
};


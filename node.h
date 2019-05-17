#pragma once
template<typename T>
class Node
{
public:
    Node(T value , Node<T>*next)
    {
     this->_value = value;
     this->_next = next;
    }

    T get_value()
    {
     return this-> _value;
    }
    void set_value(T val)
    {
      this->_value = val;
    }

    Node<T>* get_next()
    {
     return this->_next;
    }
    void set_next(Node<T>* next)
    {
      this->_next = next;
    }
private:
  T _value;
  Node<T>* _next; 
};
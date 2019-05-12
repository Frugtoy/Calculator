//#include "node.h"
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

    Node<T>* getNext()
    {
    return this->_next;
}
private:
  T _value;
  Node<T>* _next; 
};
template<typename T>
class Node// тут к сожалеию ода и линкед лист вместе но и так сойдет
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
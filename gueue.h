#pragma once
#include"node.h"
template<typename T>
class Queue
{
 
public:
    Queue(){
     this->_head = this->_tail = nullptr;
     this->_size = 0;
    }
    
    size_t get_size(){return this->_size;}
    
    void push(T val){
        Node<T>* buf = new Node<T>(val,nullptr);
        if(this->_size == 0) {
            this->_head = this->_tail = buf;
        }
        else {
            this->_tail->set_next(buf);
            this->_tail = buf;
        }
        _size++;
    }
    T pop() {
        T value = this->_head->get_value();
        
            if(this->_head == this->_tail) {
                    this->_head = this->_tail = nullptr;
            }
            else {
                this->_head = this->_head->get_next();
            }
            this->_size --;
            return value;
    }
    
    bool is_empty()
    {
        return this->_size == 0;
    }
    T front() {return this->_head->get_value();}
    T tail() {return this->_tail->get_value();}

private:
 Node<T>* _head;
 Node<T>* _tail;
 size_t _size;
};



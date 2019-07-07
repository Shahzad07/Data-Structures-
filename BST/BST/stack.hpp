
#include "node.hpp"
#ifndef _STACKS_H
#define _STACKS_H
const int maxItems = 10;
template <class T>
class STACK
{
public:
    STACK();
    bool isEmpty() const;
    bool isFull() const;
    void empty();
    void push(T);
    T pop();
    T getTop() const;
    ~STACK();
    
private:
    Node<T> *top;
};

#include "stack.cpp"
#endif

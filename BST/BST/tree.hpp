#include <iostream>
#include "node.hpp"
using namespace std;
#ifndef _tree_H
#define _tree_H
template <class T>
class tree
{
private:
    Node<T> * rt;
public:
    void add_element(Node<T>*,int val);
    Node<T> * getRoot();
    void traverse();
    tree();
};





#include "tree.cpp"
#endif

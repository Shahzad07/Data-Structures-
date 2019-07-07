#ifndef _Node_H
#define _Node_H

template <class TP>
class Node
{
public:
    Node();
    TP getData() const;
    void setData(TP);
    Node<TP>* getright() const;
    void setright(Node<TP> *);
    Node<TP>* getleft() const;
    void setleft(Node<TP> *);
    Node<TP>* getnext() const;
    void setnext(Node <TP> *);
private:
    TP data;
    Node<TP> *right;
    Node<TP> *left;
    Node<TP> *next;
    
};

#include "node.cpp"
#endif

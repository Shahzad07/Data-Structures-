
#ifndef _Node_H
#define _Node_H

template <class TYPE>
class Node {
public:
	Node();
	TYPE getData() const;
	void setData(int);
	Node<TYPE>* getNext() const;
	void setNext(Node<TYPE> *);
private:
	TYPE data;
	Node<TYPE> *next;
};

#endif
#include "node.cpp"
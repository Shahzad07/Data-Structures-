#ifndef _STACKS_H
#define _STACKS_H
const int maxItems = 10;
template <class TYPE>
class STACK
{
public:
	STACK();
	bool isEmpty() const;
	bool isFull() const;
	void empty() const;
	void push(TYPE);
	TYPE pop();
	TYPE getTop() const;

private:
	int top;
	TYPE items[maxItems];
};
#endif
#include "Stack.cpp";

#include "node.h"
#ifndef _QUEUE_
#define _QUEUE_H

template <class TYPE>

class QUEUE {
public:
	QUEUE();
	void MakeEmpty();
	bool isEmpty() const;
	void Enqueue(TYPE);
	TYPE Dequeue();
	~QUEUE();
private:
	Node<TYPE> *front;
	Node<TYPE> *rear;
};

#endif
#include "Queue.cpp"
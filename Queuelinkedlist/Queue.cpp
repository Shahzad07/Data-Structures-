
#include "Queue.h"
template<class TYPE>
QUEUE<TYPE>::QUEUE() {
	front = rear = nullptr;
}
template<class TYPE>
void QUEUE<TYPE>::MakeEmpty() 
{
	while (!isEmpty()) 
	{
		Dequeue();
	}
	cout <<" Queue is empty"<<endl;
}
template<class TYPE>
bool QUEUE<TYPE>::isEmpty() const 
{
	return front == nullptr;
}

template<class TYPE>
void QUEUE<TYPE>::Enqueue(TYPE item)
{ 
	Node<TYPE> *temp = new Node<TYPE>;
	temp->setData(item);
	if (rear == nullptr) {
		front = temp;
	} else {
		rear->setNext(temp);
	}
	rear = temp;
}

template<class TYPE>
TYPE QUEUE<TYPE>::Dequeue() 
{
	Node<TYPE> *temp = front;
	TYPE retVal = temp->getData();
	front = temp->getNext();
	if (front == nullptr) 
	{
		rear = nullptr;
	}
	delete temp;
	return retVal;
}

template<class TYPE>
QUEUE<TYPE>::~QUEUE() 
{
	MakeEmpty();
}
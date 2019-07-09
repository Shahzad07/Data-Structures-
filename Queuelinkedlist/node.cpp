
template <class TYPE>
Node<TYPE>::Node()
{
	next = nullptr;
}

template<class TYPE>
TYPE Node<TYPE>::getData() const {
	return data;
}

template<class TYPE>
void Node<TYPE>::setData(int val) {
	data = val;
}

template<class TYPE>
Node<TYPE>* Node<TYPE>::getNext() const{
	return next;
}

template<class TYPE>
void Node<TYPE>::setNext(Node<TYPE>* n) {
	next = n;
}
template <class TYPE>
STACK<TYPE>::STACK() {
	top = -1;
}

template <class TYPE>
bool STACK<TYPE>::isEmpty() const {
	return (top == -1);
}

template <class TYPE>
bool STACK<TYPE>::isFull() const {
	return (top == maxItems - 1);
}

template <class TYPE>
void STACK<TYPE>::empty() const{
	top = -1;
}

template <class TYPE>
void STACK<TYPE>::push(TYPE item) {
	if (!isFull()) {
		top++;
		items[top] = item;
	}
}

template <class TYPE>
TYPE STACK<TYPE>::pop() {
	if (!isEmpty()) {
		TYPE temp = items[top];
		top--;
		return temp;
	}
}

template <class TYPE>
TYPE STACK<TYPE>::getTop() const{
	if (!isEmpty()) {
		return items[top];
	}
}
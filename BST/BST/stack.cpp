template <class T>
STACK<T>::STACK() {
    top = nullptr;
}

template <class T>
bool STACK<T>::isEmpty() const {
    return (top == nullptr);
}

template <class T>
bool STACK<T>::isFull() const {
    return 1;
}

template <class T>
void STACK<T>::empty() {
    while (!isEmpty()) {
        pop();
    }
}

template <class T>
void STACK<T>::push(T item) {
    Node<T> *temp = new Node<T>;
    temp->setData(item);
    temp->setnext(top);
    top = temp;
}

template <class T>
T STACK<T>::pop() {
    if (!isEmpty()) {
        Node<T> *temp = top;
        top = top->getnext();
        T retVal = temp->getData();
        delete temp;
        return retVal;
    }
    return 0;
}

template <class T>
T STACK<T>::getTop() const {
    if (!isEmpty()) {
        return top->getData();
    }
    return 0;
}

template<class T>
STACK<T>::~STACK() {
    empty();
}

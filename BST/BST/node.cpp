
Node ::Node()
{
    next = nullptr;
}

int Node ::getData() const
{
    return data;
}

void Node::setData(TP val)
{
    data = val;
}

Node * Node::getleft() const
{
    return left;
} 
void Node ::setleft(Node<TP>* n)
{
    left = n;
}
Node * Node ::getright() const{
    return right;
}

void Node ::setright(Node<TP>* n) {
    right = n;
}
Node * Node ::getnext() const{
    return next;
}

void Node ::setnext(Node * n) {
    next = n;
}

template<class T>
tree<T>::tree()
{
    rt=NULL;
}

template <class T>
void tree<T>::add_element(Node<T>* root,int val)
{
    if (root==NULL) {
        root = new Node<T>;
        root->setData(val);
        root->setleft(NULL);
        root->setright(NULL);
    }
    else if (val < root->getData())
        add_element(root->getleft(), val);
    else if (val > root->getData())
        add_element(root->getright(), val);
    else
        return;
    
    
}

template <class T>
void tree<T>::traverse()
{
    if (rt == NULL)
    {
        cout<<"tree is empty";
        
    }
    
    STACK<Node<T> *> stk;
    stk.push(rt);
    while (stk.isEmpty() == false)
    {
        Node<T> *node;
        node->setnext(stk.getTop());
        cout <<node->getnext()->getData()<<endl;
        stk.pop();
        
        if ((node->getnext())->getright())
            stk.push((node->getnext())->getright());
        if ((node->getnext())->getleft())
            stk.push((node->getnext())->getleft());
    }
    
}
template <class T>
Node<T>* tree<T>:: getRoot()
{
    return rt;
}


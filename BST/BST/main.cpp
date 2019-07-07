
#include <iostream>
#include "stack.hpp"
#include "tree.hpp"
using namespace std;

int main()
{
    int val,opt;
    tree <int> t1;
    do
    {
        cout<<"menu"<<endl;
        cout<<"1-----add element"<<endl;
        cout<<"2-----traverse"<<endl;
        cout<<"Press any other key to exit"<<endl;
        cout<<"Enter option"<<endl;
        cin>>opt;
        switch (opt)
        {
            case 1:
            {
                cout<<"enter value you want to add"<<endl;
                cin>>val;
                t1.add_element(t1.getRoot(),val);
                break;
            }
            case 2:
            {
                t1.traverse();
                break;
            }
            default:
                
                return 0;
        }
    }
    while(opt==1 || opt==2);
    
    return 0;
    
}

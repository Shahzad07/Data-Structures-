#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
	int opt,val;
	do
	{
	QUEUE<int> q1;
	cout<<"menu"<<endl;
	cout<<"1-----add element"<<endl;
	cout<<"2-----display"<<endl;
	cout<<"3-----make empty"<<endl;
	cout<<"4-----------exit"<<endl;
	cout<<"Enter option"<<endl;
	cin>>opt;
	switch (opt)
	{
		case 1 :
		{
			cout<<"Enter value you want to enter"<<endl;
			cin >> val;
			q1.Enqueue(val);
		
			break;
		}
		case 2 :
		{

		while (!q1.isEmpty())
			{
				cout<< q1.Dequeue();
				break;
			}

		}
		case 3 :

		{
			q1.MakeEmpty();
			break;
		}
		default :
		{
		break;
		}
	}
	}while (opt!=4);
	
	return 0;
}
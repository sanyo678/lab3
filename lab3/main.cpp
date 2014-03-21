#pragma once
#include "List.h"
#include "stdlib.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void main ()
{
	List l;
	listNode* itr;
	
	int N,delN;
	int index, value;

	cin>>N;
	for (int i = 0; i<N; i++)
	{
		cin>>index>>value;
		l.insert(&listNode(value),index);
	}
	cin>>delN;

	l.remove(delN);
	
	cout<<"Список:"<<endl;
	for (itr = l.head->next; itr!= l.tail; itr = itr->next)
	{
		cout<<itr->value<<" ";
	}

	system("pause");
}
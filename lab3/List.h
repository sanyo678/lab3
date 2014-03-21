#pragma once
#include "listNode.h"
class List
{
public:
	listNode*	head;
	listNode*	tail;
	int			length;

	void		insert(listNode*,int);
	int			get(int);
	void		remove(int);
				List(void);
				~List(void);
};


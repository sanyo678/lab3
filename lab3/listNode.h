#pragma once
class listNode
{
public:
	listNode*		prev;
	listNode*       next;
	int				value;

	listNode*		remove();
	void			insert(listNode*);
					listNode(int);
					~listNode(void);
};


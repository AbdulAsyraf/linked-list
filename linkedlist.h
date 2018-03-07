#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T>
class List
{
private:
	struct Node
	{
		T data;
		Node *link;
	};

	Node *pHead, *pCurr;
	int numItem;

public:
	List();
	~List();
	//void AddToFront();
	void AddToFrontRandom(T);
	bool Traverse(T, int &);
	void PrintData();
	int NumberOfItem();
};
#endif
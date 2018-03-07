#include <iostream>
#include "linkedlist.h"
using namespace std;

template <class T>
List<T>::List()
{
	numItem = 0;
	pHead = NULL;
}

template <class T>
List<T>::~List() {}

/*template <class T>
void List<T>::AddToFront()
{
	T item;
	Node *pNew = new Node;
	cout << "Enter Data : ";
	cin >> item;
	pNew->data = item;
	pNew->link = pHead;
	pHead = pNew;
	numItem++;
}*/

template <class T>
void List<T>::AddToFrontRandom(T randNum)
{
	Node *pNew = new Node;
	pNew->data = randNum;
	pNew->link = pHead;
	pHead = pNew;
	numItem++;
}

template <class T>
bool List<T>::Traverse(T target, int &loc)
{
	if (numItem == 0)
		cout << "List is empty\n";
	else
	{
		pCurr = pHead;
		loc = 0;
		while (pCurr->data != target && pCurr->link != NULL)
		{
			pCurr = pCurr->link;
			loc++;
		}
		if (pCurr->data == target)
			return true;
		else
			return false;
	}
}

template <class T>
void List<T>::PrintData()
{
	pCurr = pHead;
	while (pCurr != NULL)
	{
		cout << pCurr->data << " ";
		pCurr = pCurr->link;
	}
	cout << endl;
}

template <class T>
int List<T>::NumberOfItem()
{
	return numItem;
}

template class List<int>;
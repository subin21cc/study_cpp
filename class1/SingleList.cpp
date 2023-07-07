#include <iostream>
#include "SingleList.h"

using namespace std;

SingleList::SingleList()
{
	head = nullptr;
}

SingleList::~SingleList()
{
}

void SingleList::append(ElementType e)
{
	Node* n = new Node;

	if (n)
	{
		n->Data = e;
		n->NextNode = nullptr;
	}


	if (head == nullptr)
	{
		head = n;
	}
	else
	{
		Node* tail = head;
		while (tail->NextNode != nullptr)
		{
			tail = tail->NextNode;
		}
		tail->NextNode = n;
	}
}

void SingleList::removeAt(int l)
{
}

void SingleList::print()
{
	Node* n = head;

	while (n)
	{
		cout << n->Data << " ";
		n = n->NextNode;
	}
	cout << "\n";
}

void SingleList::insertAt(int l, ElementType e)
{
}

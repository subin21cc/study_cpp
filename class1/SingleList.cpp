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

bool SingleList::removeAt(int l)
{
	if (head == nullptr)
	{
		return false;
	}

	if (l == 0)
	{
		Node* t = head->NextNode;
		delete head;
		head = t;
		return true;
	}

	Node* next = head;
	int count = 0;
	while (next != nullptr)
	{
		if (count + 1 == l)
		{
			if (next->NextNode != nullptr)
			{
				Node* t = next->NextNode->NextNode;
				delete next->NextNode;
				next->NextNode = t;
			}
			return true;
		}
		count++;
		next = next->NextNode;
	}
	return false;
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

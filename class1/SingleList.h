#pragma once

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
	struct tagNode* NextNode;
} Node;

class SingleList
{
private:
	Node* head;

public:
	SingleList();
	~SingleList();
	void append(ElementType e);
	bool removeAt(int l);
	void print();
	void insertAt(int l, ElementType e);
};


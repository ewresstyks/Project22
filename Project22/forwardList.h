#pragma once

class Node
{
public:
	int value;
	Node* next;
	Node() : value(0), next(nullptr) {}
	Node(int value) : value(value), next(nullptr) {}
};

class forwardList
{
	Node* head;
	Node* tail;
	int size;
public:
	forwardList(const forwardList& obj);
	forwardList() : head(nullptr), tail(nullptr), size(0) {}
	void PushBack(int value);
	void Print();
	void PopFront();
	const Node* find(int value);
	/*void popBack();*/
	~forwardList();
};
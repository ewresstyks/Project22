#include "forwardList.h"
#include <iostream>
using namespace std;

forwardList::forwardList(const forwardList& obj)
{

}

void forwardList::PushBack(int value)
{

	if (head and tail) {
		Node* new_node = new Node(value);
		tail->next = new_node;
		tail = new_node;
	}
	else {
		Node* new_node = new Node(value);
		head = new_node;
		tail = new_node;
	}
	size++;
}

void forwardList::Print()
{
	if (head && tail) {
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->value << endl;
			current = current->next;
		}
	}
	cout << "Size - " << size;
}

void forwardList::PopFront()
{
	if (head and tail) {
		Node* temp = head->next;
		delete head;
		if (!temp) {
			tail = temp;
		}
		head = temp;
	}
	size++;
}

const Node* forwardList::find(int value)
{
	Node* current = head;
	while (current != nullptr)
	{
		if (current->value == value) {
			return current;
		}
		current = current->next;
	}
	return nullptr;
}

forwardList::~forwardList()
{
	Node* current = head;
	while (current != nullptr) {
		Node* next = current->next;
		delete current;
		current = next;
	}
	size = 0;
	head = tail = nullptr;
	cout << "\nDestructor";
}
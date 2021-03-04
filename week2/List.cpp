#include "List.h"
#include <iostream>

void List::add(int v)
{
	Node* k = new Node();
	k->value = v;

	if (head == nullptr) {
		head = k;
		tail = k;
	}
	else
	{
		tail->next = k;
		k->prev = tail;
		tail = k;
	}
}

void List::print()
{
	Node* temp = head;

	while (temp != nullptr)
	{
		std::cout << temp->value<<" ";
		temp = temp->next;
	}
}

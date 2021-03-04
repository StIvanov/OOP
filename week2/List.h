#pragma once

struct Node {
	int value;
	Node* next = nullptr;
	Node* prev = nullptr;
};

class List
{
private:
	Node* head = nullptr;
	Node* tail = nullptr;
public:
	void add(int v);
	void print();
};


#pragma once
#include <iostream>
// sweeney's hand-rolled stack class.

// singly linked list node.
struct node
{
	int data;
	node* next = nullptr;
};

class stack
{
public:
	int push(node** list, int data);
	int pop(node** list);
	int top(node* list, int &data);
	int clear(node** list);
	int isEmpty(node* list);
	int size(node* list, int &nodeCount);
	int print(node* list);
};
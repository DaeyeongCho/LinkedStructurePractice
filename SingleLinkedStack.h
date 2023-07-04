#pragma once
#ifndef SINGLE_LINKED_STACK_H
#define SINGLE_LINKED_STACK_H

#include <iostream>
#include <string>
#include "SingleNode.h"

class SingleLinkedStack {
private:
	SingleNode* top;
	int count;
public:
	SingleLinkedStack();
	~SingleLinkedStack();
	bool isEmpty();
	int countNode();
	string getTop();
	void push(string value);
	string pop();
	void traversal();
};

#endif SINGLE_LINKED_STACK_H

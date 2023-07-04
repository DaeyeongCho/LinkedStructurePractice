#pragma once
#ifndef DOUBLE_LINKED_QUEUE_H
#define DOUBLE_LINKED_QUEUE_H

#include <iostream>
#include "DoubleNode.h"

class DoubleLinkedQueue {
private:
	DoubleNode* head;
	DoubleNode* tail;
	int count;
public:
	DoubleLinkedQueue();
	~DoubleLinkedQueue();
	bool isEmpty();
	int countNode();
	void put(string input);
	string get();
	string getHead();
	string getTail();
	void traversal();
};

#endif DOUBLE_LINKED_QUEUE_H

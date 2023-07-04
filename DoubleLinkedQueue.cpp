#include "DoubleLinkedQueue.h"

DoubleLinkedQueue::DoubleLinkedQueue() :count(0)
{
	DoubleNode* tempNode;

	tempNode = new DoubleNode();
	tempNode->value = "this is head node";
	head = tempNode;

	tempNode = new DoubleNode();
	tempNode->value = "this is tail node";
	tail = tempNode;
	
	head->next = tail;
	tail->prev = head;
}

DoubleLinkedQueue::~DoubleLinkedQueue()
{
	while (!isEmpty()) {
		get();
	}
}

bool DoubleLinkedQueue::isEmpty()
{
	if (count == 0) {
		return true;
	}
	else {
		return false;
	}
}

int DoubleLinkedQueue::countNode()
{
	return count;
}

void DoubleLinkedQueue::put(string input)
{
	DoubleNode* tempNode = new DoubleNode();
	tempNode->value = input;

	tempNode->prev = tail->prev;
	tempNode->next = tail;
	tail->prev->next = tempNode;
	tail->prev = tempNode;

	count++;
	return;
}

string DoubleLinkedQueue::get()
{
	DoubleNode* tempNode = head->next;
	string returnValue;

	if (tempNode == tail) {
		return "NoData";
	}

	head->next = tempNode->next;
	tempNode->next->prev = head;

	returnValue = tempNode->value;
	count--;

	delete tempNode;

	return returnValue;
}

string DoubleLinkedQueue::getHead()
{	
	if (isEmpty()) {
		return "NoData";
	}

	return head->next->value;
}

string DoubleLinkedQueue::getTail()
{
	if (isEmpty()) {
		return "NoData";
	}

	return tail->prev->value;
}

void DoubleLinkedQueue::traversal()
{
	DoubleNode* nodePointer;

	if (isEmpty()) {
		cout << "Nodata\n" << endl;
	}

	nodePointer = head->next;

	while (nodePointer->next != tail) {
		cout << nodePointer->value;
		cout << " -> ";
		nodePointer = nodePointer->next;
	}
	cout << nodePointer->value;
	cout << endl;
	cout << "ÃÑ °³¼ö: ";
	cout << count << endl;
}

#include "SingleLinkedStack.h"


SingleLinkedStack::SingleLinkedStack() : top(nullptr), count(0)
{
}

SingleLinkedStack::~SingleLinkedStack()
{
	while (!isEmpty()) {
		pop();
	}
}

bool SingleLinkedStack::isEmpty()
{
	if (count == 0) {
		return true;
	}
	else {
		return false;
	}
}

int SingleLinkedStack::countNode()
{
	return count;
}

string SingleLinkedStack::getTop()
{
	if (isEmpty()) {
		return "NoDate";
	}
	return top->value;
}

void SingleLinkedStack::push(string value)
{
	SingleNode* newNode = new SingleNode();
	newNode->value = value;
	if (isEmpty()) {
		top = newNode;
	}
	else {
		newNode->next = top;
		top = newNode;
	}
	count++;
}

string SingleLinkedStack::pop()
{
	SingleNode* delNode;
	string returnValue;

	if (isEmpty()) {
		return "NoData";
	}

	delNode = top;
	returnValue = delNode->value;
	count--;

	if (isEmpty()) {
		top = nullptr;
		delete delNode;
		return returnValue;
	}
	else {
		top = delNode->next;
		delete delNode;
		return returnValue;
	}
}

void SingleLinkedStack::traversal()
{
	SingleNode* nodePointer = top;

	if (nodePointer == nullptr) {
		cout << "NoDate\n" << endl;
		return;
	}

	while (nodePointer->next != nullptr) {
		cout << nodePointer->value;
		cout << " -> ";
		nodePointer = nodePointer->next;
	}
	cout << nodePointer->value;
	cout << endl;
	cout << "ÃÑ °³¼ö: ";
	cout << count << endl;
}

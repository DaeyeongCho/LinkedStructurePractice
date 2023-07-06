#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() : root(nullptr), count(0)
{
}

BinarySearchTree::~BinarySearchTree()
{
}

bool BinarySearchTree::isEmpty()
{
	if (count == 0) {
		return true;
	}
	else {
		return false;
	}
}

int BinarySearchTree::countNode()
{
	return count;
}

void BinarySearchTree::insertNode(string value)
{
	if (isEmpty) {
		BinaryTreeNode* tempNode = new BinaryTreeNode();
		tempNode->value = value;
		root = tempNode;
	}
	else {
		BinaryTreeNode* nodePointer = root;
		while (true) {
			if (value == nodePointer->value) {
				cout << "트리에 동일 값 존재" << endl;
			}
			else if (value < nodePointer->value) {

			}
		}
	}
}


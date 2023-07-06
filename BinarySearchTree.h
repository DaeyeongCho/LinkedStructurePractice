#pragma once
#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>

using namespace std;

#include "BinaryTreeNode.h"

class BinarySearchTree {
private:
	BinaryTreeNode* root;
	int count;
public:
	BinarySearchTree();
	~BinarySearchTree();
	bool isEmpty();
	int countNode();
	//string searchNode(string searchValue);
	void insertNode(string value);
	//string deleteNode(string value);
};

#endif BINARY_SEARCH_TREE_H

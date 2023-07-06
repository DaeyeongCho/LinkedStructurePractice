#pragma once
#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

#include <string>

using namespace std;

class BinaryTreeNode {
public:
	string value;
	BinaryTreeNode* parent;
	BinaryTreeNode* left;
	BinaryTreeNode* right;
public:
	BinaryTreeNode() :value(NULL), parent(nullptr), left(nullptr), right(nullptr) { }
};

#endif BINARY_TREE_NODE_H

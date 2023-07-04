#pragma once
#ifndef DOUBLE_NODE_H
#define DOUBLE_NODE_H

#include <string>

using namespace std;

class DoubleNode {
public:
	string value;
	DoubleNode* prev;
	DoubleNode* next;
public:
	DoubleNode() : prev(nullptr), next(nullptr) { }
};

#endif DOUBLE_NODE_H
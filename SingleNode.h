#pragma once
#ifndef SINGLE_NODE_H
#define SINGLE_NODE_H

#include <string>

using namespace std;

class SingleNode {
public:
	string value;
	SingleNode* next;
public:
	SingleNode() : next(nullptr) { }
};

#endif SINGLE_NODE_H

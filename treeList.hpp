#pragma once

#include <iostream>
#include "treeListNode.hpp"

class TreeNode;
class TreeListNode;
class TreeList {
private:
	TreeListNode* head;
public:
	TreeList();
	TreeListNode* getHead();
	void insertFirst(TreeNode* treeNode);
	void removeFirst();
	void remove(char val);
	void removeAll();
	bool isEmpty();
	TreeNode* find(char val);
	void print();
	virtual ~TreeList();
};

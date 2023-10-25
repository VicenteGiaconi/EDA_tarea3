#pragma once

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
	void remove(int val);
	void removeAll();
	bool isEmpty();
	TreeNode* find(int val);
	void print();
	virtual ~TreeList();
};

#pragma once

#include "treeNode.hpp"

class TreeNode;
class TreeListNode {
private:
	TreeNode* data;
	TreeListNode* ptrNext;

public:
	TreeListNode();
	TreeListNode(TreeNode* _data, TreeListNode* next = nullptr);
	void setData(TreeNode* _data);
	void setNext(TreeListNode* _next);
	TreeNode* getData();
	TreeListNode* getNext();
	virtual ~TreeListNode();
};

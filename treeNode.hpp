#pragma once

#include "treeList.hpp"

class TreeList;
class TreeNode {
private:
	TreeNode* parent;
	int data; //data can be of any type
	TreeList* children;
public:
	TreeNode();
	TreeNode(int val);
	void setParent(TreeNode* node);
	void setData(int val);
	void setChildren(TreeList* list);
	TreeNode* getParent();
	int getData();
	TreeList* getChildren();
	virtual ~TreeNode();
};

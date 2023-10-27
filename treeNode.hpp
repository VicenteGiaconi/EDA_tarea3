#pragma once

#include "treeList.hpp"
#include <iostream>

class TreeList;
class TreeNode {
private:
	TreeNode* parent;
	char data; //data can be of any type
	TreeList* children;
public:
	TreeNode();
	TreeNode(char val);
	void setParent(TreeNode* node);
	void setData(char val);
	void setChildren(TreeList* list);
	TreeNode* getParent();
	char getData();
	TreeList* getChildren();
	virtual ~TreeNode();
};

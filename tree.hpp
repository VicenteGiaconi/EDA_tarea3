#pragma once

#include "treeNode.hpp"

class Tree {
private:
	TreeNode* root;
public:
	Tree();
	void setRoot(TreeNode* node);
	void insert(TreeNode* node, TreeNode* parent);
	void insert(char child, char parent);
	TreeNode* find_rec(char val, TreeNode* node);
	TreeNode* find(char val);
	void traverse_rec(TreeNode* node, int level);
	void traverse();
	virtual ~Tree();
};

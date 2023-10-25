#pragma once

#include "treeNode.hpp"

class Tree {
private:
	TreeNode* root;
public:
	Tree();
	void setRoot(TreeNode* node);
	void insert(TreeNode* node, TreeNode* parent);
	void insert(int child, int parent);
	TreeNode* find_rec(int val, TreeNode* node);
	TreeNode* find(int val);
	void traverse_rec(TreeNode* node, int level);
	void traverse();
	virtual ~Tree();
};

#include "treeNode.hpp"

TreeNode::TreeNode(): parent(nullptr), data('@'), children(new TreeList()) {
}

TreeNode::TreeNode(char val): parent(nullptr), data(val), children(new TreeList()) {
}

void TreeNode::setParent(TreeNode* node){
	parent = node;
}
void TreeNode::setData(char val){
		data = val;
}
void TreeNode::setChildren(TreeList* list){
	children = list;
}
TreeNode* TreeNode::getParent(){
	return parent;
}
char TreeNode::getData(){
	return data;
}
TreeList* TreeNode::getChildren(){
	return children;
}

TreeNode::~TreeNode() {
	//action when a treeNode is deleted
	//delete the descendants only
	if (children != nullptr){
		delete children;
	}
}

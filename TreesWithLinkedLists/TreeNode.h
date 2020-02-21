#pragma once
#include<iostream>
#include<string>
#include "DataValue.h"
#include <functional>
using namespace std;
class TreeNode
{
public:
	TreeNode();
	~TreeNode();
	TreeNode * getLeft();
	TreeNode * getRight();
	void setLeft(TreeNode * node);
	void setRight(TreeNode * node);
	void setData(DataValue * data);
	DataValue * getData();
	//TreeNode * addLeft(DataValue * data);
	//TreeNode* addRight(DataValue * data);
	TreeNode* FindMax(TreeNode* root);
	void insert(TreeNode *& tree, DataValue * value);
	void deleteNode(TreeNode *& tree, string value);

private:
	TreeNode * leftNode;
	TreeNode * rightNode;
	DataValue * dataValue;
};


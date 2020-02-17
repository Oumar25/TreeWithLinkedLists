// TreesWithLinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include"DataValue.h"
#include"TreeNode.h"
using namespace std;
void displayTree(TreeNode * node, string parent, string side);
int main()
{
    std::cout << "Hello World!\n"; 
	int nodeNumber = 0;
	TreeNode * root = new TreeNode();
	root->setData(new DataValue("k", ++nodeNumber));
	//TreeNode *c = new TreeNode();

	root->insert(root, new DataValue("l", ++nodeNumber));
	root->insert(root, new DataValue("d", ++nodeNumber));
	root->insert(root, new DataValue("a", ++nodeNumber));
	root->insert(root, new DataValue("e", ++nodeNumber));
	root->insert(root, new DataValue("f", ++nodeNumber));
	root->deleteNode(root, "d");
	displayTree(root, " ", " ");


	return 0;
}
void displayTree(TreeNode * node, string parent, string side)
{
	if (node == nullptr)
	{
		return;
	}
	if (side != " ")
	{
		side += " of";
	}
	cout << "Displaying node: " << node->getData()->getDataAsString() << side << " Parent = " << parent << endl;
	if (node->getLeft() != nullptr) {
		displayTree(node->getLeft(), node->getData()->getDataAsString(), "  Left");
	}
	if (node->getRight() != nullptr) {
		displayTree(node->getRight(), node->getData()->getDataAsString(), "  Right");
	}
}


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
	//string oumar = "k";
	root->setData(new DataValue("E", ++nodeNumber));


	//TreeNode *c = new TreeNode();
 root->insert(root,new DataValue("C", ++nodeNumber));
 root->insert(root, new DataValue("A", ++nodeNumber));
 root->insert(root, new DataValue("B", ++nodeNumber));
 root->insert(root, new DataValue("D", ++nodeNumber));
 root->insert(root, new DataValue("M", ++nodeNumber));
 root->insert(root, new DataValue("H", ++nodeNumber));
 root->insert(root, new DataValue("F", ++nodeNumber));
 root->insert(root, new DataValue("G", ++nodeNumber));
 root->insert(root, new DataValue("J", ++nodeNumber));
 root->insert(root, new DataValue("P", ++nodeNumber));
 root->insert(root, new DataValue("N", ++nodeNumber));
 root->insert(root, new DataValue("R", ++nodeNumber));
 root->insert(root, new DataValue("Q", ++nodeNumber));
 displayTree(root, " ", " ");
 cout << endl;
 root->deleteNode(root, "E");
//	root->insert(root, new DataValue("e", ++nodeNumber));
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


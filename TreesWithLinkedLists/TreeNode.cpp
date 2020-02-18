#include "pch.h"
#include "TreeNode.h"
#include <iostream>
#include <functional>
#include <cstdlib>


TreeNode::TreeNode()
{
	leftNode = nullptr;
	rightNode = nullptr;
	dataValue = nullptr;
}


TreeNode::~TreeNode()
{
	//	cout << "In TreeNode destructor, deleting node: " << dataValue->getValue() << endl;
	if (dataValue != nullptr)
	{
		delete dataValue;
		dataValue = nullptr;
	}
	if (rightNode != nullptr)
	{
		delete rightNode;
	}
	if (leftNode != nullptr)
	{
		delete leftNode;
	}
}

TreeNode * TreeNode::getLeft()
{
	return leftNode;
}

TreeNode * TreeNode::getRight()
{
	return rightNode;
}

void TreeNode::setLeft(TreeNode * node)
{
	leftNode = node;
}

void TreeNode::setRight(TreeNode * node)
{
	rightNode = node;
}

void TreeNode::setData(DataValue * data)
{
	dataValue = data;
}

DataValue * TreeNode::getData()
{
	return dataValue;
}

//TreeNode * TreeNode::addLeft(DataValue * data)
//{
//	if (leftNode != nullptr)
//	{
//		throw "Left node already exists for node: " + leftNode->getData()->getValue();
//	}
//	leftNode = new TreeNode();
//	leftNode->setData(data);
//	return leftNode;
//}
//
//TreeNode * TreeNode::addRight(DataValue * data)
//{
//	if (rightNode != nullptr)
//	{
//		throw "Right node already exists for node: " + rightNode->getData()->getValue();
//	}
//	rightNode = new TreeNode();
//	rightNode->setData(data);
//	return rightNode;
//}

TreeNode * TreeNode::FindMin(TreeNode * root)
{
	while (root->leftNode != NULL)
	{ 
		root = root->leftNode; 
	}
		return root;
}
void TreeNode::deleteNode(TreeNode *& tree, string value)
{
	if (value == tree->getData()->getValue())
	{
		if (tree->leftNode == nullptr && tree->rightNode == nullptr)
		{
			cout << "Found" << endl;
			tree = nullptr;
		}
		else if (tree->leftNode == nullptr && tree->rightNode != nullptr)
		{
			tree->setData(tree->getRight()->getData());
			tree->rightNode = nullptr;
		}
		else if (tree->leftNode != nullptr && tree->rightNode == nullptr)
		{
			tree->setData(tree->getLeft()->getData());
			tree->leftNode = nullptr;
		}
		else if (tree->leftNode != nullptr && tree->rightNode != nullptr)
		{
				TreeNode *temp = FindMin(tree->rightNode);
				tree->setData(temp->getData());
			    deleteNode(tree->rightNode,temp->getData()->getValue());
		}
		else
		{
			// I need to throw an exception when the value doesn't exist
		}
	}
    else if (value < tree->getData()->getValue())
	{
	     deleteNode(tree->leftNode, value);
	}
	else if (value > tree->getData()->getValue())
	{
	     deleteNode(tree->rightNode, value);
	}
}
void TreeNode::insert(TreeNode * &tree, DataValue *value) {
	//Throw an exception when a tree already exist
	if (tree == nullptr)
	{
		tree = new TreeNode();
		tree->getRight() == nullptr;
		tree->getLeft() == nullptr;
		tree->setData(value);
	}
	else if (value->getValue() < tree->getData()->getValue())
	{
		insert(tree->leftNode, value);
	}
	else if (value->getValue() > tree->getData()->getValue())
	{
		insert(tree->rightNode, value);
	}
}


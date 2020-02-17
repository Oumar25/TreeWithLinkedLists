#include "pch.h"
#include "DataValue.h"
#include <iostream>

using namespace std;

DataValue::DataValue()
{
	value = "";
}

DataValue::DataValue(string s, int i)
{
	value = s;
	intData = i;
}


DataValue::~DataValue()
{
	//	cout << "In DataValue destructor, deleting node: " << value << endl;
}

string DataValue::getValue()
{
	return value;
}

void DataValue::setValue(string val)
{
	value = val;
}

int DataValue::getIntData()
{
	return intData;
}

void DataValue::setIntData(int i)
{
	intData = i;
}

string DataValue::getDataAsString()
{
	return "Node " + to_string(intData) + ": " + value;
}
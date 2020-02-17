#include<iostream>
#include<string>
using namespace std;
#pragma once
class DataValue
{
public:
	DataValue();
	DataValue(string s, int i);
	~DataValue();

	string getValue();
	void setValue(string val);
	int getIntData();
	void setIntData(int i);

	string getDataAsString();

private:
	string value;
	int intData;
};


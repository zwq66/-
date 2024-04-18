#pragma once
#include<iostream>
using namespace std;
#include"globalFile.h"
#include<fstream>
#include<map>
#include<string>
class OrderFile
{
public:
	OrderFile();
	void updateOrder();
	void getmap(string s, map<string, string>&m);
	int m_Size;
	map<int, map<string, string>>m_orderData;

};
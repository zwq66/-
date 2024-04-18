#pragma once
#include<iostream>
using namespace std;
#include"Identity.h"
#include<string>
#include"computerRoom.h"
#include<fstream>
#include"globalFile.h"
#include"orderFile.h"
#include<vector>

class Student :public Identity
{
public:
	Student();
	Student(int id, string name, string pwd);
	//菜单
	virtual void operMenu();
	//申请预约
	void applyOrder();
	//查看自身预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();
	//取消预约
	void cancelOrder();
	int m_Id;
	vector<ComputerRoom>vCom;
};
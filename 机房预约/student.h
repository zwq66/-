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
	//�˵�
	virtual void operMenu();
	//����ԤԼ
	void applyOrder();
	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();
	//ȡ��ԤԼ
	void cancelOrder();
	int m_Id;
	vector<ComputerRoom>vCom;
};
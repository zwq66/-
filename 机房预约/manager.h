#pragma once
#include<iostream>
using namespace std;
#include"Identity.h"
#include<string>
#include<fstream>
#include"globalFile.h"
#include<vector>
#include"student.h"
#include"teacher.h"
#include<algorithm>
#include"computerRoom.h"
class Manager:public Identity
{
public:
	Manager();
	Manager(string name, string pwd);
	//菜单
	virtual void operMenu();
	//添加账户
	void addPerson();
	//查看账号
	void showPerson();
	//查看机房
	void showComputer();
	//清空记录
	void clearFile();
	//初始化容器
	void initVector();
	//检测账户重复
	bool checkRepeat(int id, int type);
	//学生容器
	vector<Student>vStu;
	//教师容器
	vector<Teacher>vTea;
	//机房容器
	vector<ComputerRoom>vCom;
};

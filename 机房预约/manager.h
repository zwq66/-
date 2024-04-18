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
	//�˵�
	virtual void operMenu();
	//����˻�
	void addPerson();
	//�鿴�˺�
	void showPerson();
	//�鿴����
	void showComputer();
	//��ռ�¼
	void clearFile();
	//��ʼ������
	void initVector();
	//����˻��ظ�
	bool checkRepeat(int id, int type);
	//ѧ������
	vector<Student>vStu;
	//��ʦ����
	vector<Teacher>vTea;
	//��������
	vector<ComputerRoom>vCom;
};

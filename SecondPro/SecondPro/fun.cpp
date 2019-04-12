//fun.cpp 
//
#include "pch.h"
#include  <iostream>
#include  "fun.h"
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
void STU::setData(string index, string name, string gender, string age)
{
	Index = index;
	Name = name;
	Gender = gender;
	Age = age;
}
void printInfor( STU * students)
{
	fstream file;
	string index[MAX], name[MAX], gender[MAX], age[MAX];
	file.open("infor.txt", ios::in);
	if (!file)
	{
		cout << "打开文件失败" << endl;
		exit(0);
	}
	
	int i, j;
	for (i = 0; i < MAX; i++)
	{
		file >> index[i] >> name[i] >> gender[i] >> age[i];
		if (file.fail())
			break;
	}
	
	for (j = 0; j < i; j++)
	{
		students[j].setData(index[j], name[j], gender[j], age[j]);
		
	}
	for (j = 0; j < i; j++)
	{
		cout << setw(20) << " | 学号 : " << students[j].getIndex() << endl;
		cout << setw(20) << " | 姓名 : " << students[j].getName() << endl;
		cout << setw(20) << " | 性别 : " << students[j].getGender() << endl;
		cout << setw(20) << " | 年龄 : " << students[j].getAge() << endl << endl;
	}
}
void inputInfo(STU * students)
{
	
	fstream file;
	string index[MAX], name[MAX], gender[MAX], age[MAX];
	file.open("infor.txt", ios::app);
	if (!file)
	{
		cout << "打开文件失败" << endl;
		exit(0);
	}
	string setIndex;
	string setName;
	string setGender;
	string setAge;
	char choice = 'y';
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << setw(30) << "| 请输入学号  ：";
		cin >> setIndex;
		cout << setw(30) << "| 请输入姓名  ：";
		cin >> setName;
		cout << setw(30) << "| 请输入性别  ：";
		cin >> setGender;
		cout << setw(30) << "| 请输入年龄  : ";
		cin >> setAge;
		cout << endl;
		
		getchar();
		file << "\n" << setIndex << "\t" << setName << "\t" << setGender << "\t" << setAge;
		cout << setw(30) << "| 是否继续输入：";
		cout << " y / n ?\t\t";
		choice = getchar();
		if (choice == 'n' || choice == 'N')
			break;
	}
	
}
void mune()
{
	cout << "---------------"  << "学生类系统" << "---------------" << endl;
	cout << "---------------"  << "1.信息录入" << "---------------" << endl;
	cout << "---------------"  << "2.信息输出" << "---------------" << endl;
	cout << "---------------"  << "3.退出系统" << "---------------" << endl;
}
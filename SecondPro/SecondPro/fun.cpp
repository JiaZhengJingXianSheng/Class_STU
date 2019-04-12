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
		cout << "���ļ�ʧ��" << endl;
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
		cout << setw(20) << " | ѧ�� : " << students[j].getIndex() << endl;
		cout << setw(20) << " | ���� : " << students[j].getName() << endl;
		cout << setw(20) << " | �Ա� : " << students[j].getGender() << endl;
		cout << setw(20) << " | ���� : " << students[j].getAge() << endl << endl;
	}
}
void inputInfo(STU * students)
{
	
	fstream file;
	string index[MAX], name[MAX], gender[MAX], age[MAX];
	file.open("infor.txt", ios::app);
	if (!file)
	{
		cout << "���ļ�ʧ��" << endl;
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
		cout << setw(30) << "| ������ѧ��  ��";
		cin >> setIndex;
		cout << setw(30) << "| ����������  ��";
		cin >> setName;
		cout << setw(30) << "| �������Ա�  ��";
		cin >> setGender;
		cout << setw(30) << "| ����������  : ";
		cin >> setAge;
		cout << endl;
		
		getchar();
		file << "\n" << setIndex << "\t" << setName << "\t" << setGender << "\t" << setAge;
		cout << setw(30) << "| �Ƿ�������룺";
		cout << " y / n ?\t\t";
		choice = getchar();
		if (choice == 'n' || choice == 'N')
			break;
	}
	
}
void mune()
{
	cout << "---------------"  << "ѧ����ϵͳ" << "---------------" << endl;
	cout << "---------------"  << "1.��Ϣ¼��" << "---------------" << endl;
	cout << "---------------"  << "2.��Ϣ���" << "---------------" << endl;
	cout << "---------------"  << "3.�˳�ϵͳ" << "---------------" << endl;
}
// SecondPro.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "fun.h"
#include <iomanip>

using namespace std;
int main()
{
	STU * students;
	students = new STU[MAX];
	int choice ;
	while (1)
	{
		mune();
		cout << "请输入你的选择 ： ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			inputInfo(students);
			break;
		}
		case 2:
		{
			printInfor(students);
			break;
		}
		case 3:
			return 2;

		}
	}
}
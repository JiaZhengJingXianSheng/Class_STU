#pragma once
#ifndef __FUN_H__
#define __FUN_H__
#include <string>
#define MAX 50
using namespace std;
class STU
{
private:
	string Index;
	string Name;
	string Gender;
	string Age;
public:

	void    setData(string, string, string, string);
	string     getIndex() { return Index; }
	string  getName() { return Name; }
	string  getGender() { return Gender; }
	string     getAge() { return Age; }
};
void printInfor( STU * students);
void inputInfo(STU * students);
void mune();
#endif // !__FUN_H__

/*二、基本类设计
1、任务：
设计一个学生类，包括学生如下信息：学号、姓名、性别、年龄（或：出生日期、英语成绩、数据成绩、学生简历）。
2、要求：
1）提供相关成员函数实现学生信息的输入与输出。给出类说明并实现相关成员函数
2）编写一个程序用于输入学生的相关信息，送入的学生存放在一个学生数组中，然后将其存放到文件中
3）编写一个程序读取文件中的学生，将其存放到一个学生数组中。*/
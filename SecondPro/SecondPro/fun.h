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

/*�������������
1������
���һ��ѧ���࣬����ѧ��������Ϣ��ѧ�š��������Ա����䣨�򣺳������ڡ�Ӣ��ɼ������ݳɼ���ѧ����������
2��Ҫ��
1���ṩ��س�Ա����ʵ��ѧ����Ϣ�������������������˵����ʵ����س�Ա����
2����дһ��������������ѧ���������Ϣ�������ѧ�������һ��ѧ�������У�Ȼ�����ŵ��ļ���
3����дһ�������ȡ�ļ��е�ѧ���������ŵ�һ��ѧ�������С�*/
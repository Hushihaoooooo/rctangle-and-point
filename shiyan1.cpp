//shiyan1.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	//1������һ�����ζ���
	Rectangle myrc(1, 2, 3, 4);
	//2������ö�������Ͻ����꣬���ߣ��ܳ������
	cout << "�ö�������Ͻ������ǣ�" << myrc.getLeftTop().GetX() << " " << myrc.getLeftTop().GetY()<<endl;
	cout << "�ö���Ŀ��ǣ�" << myrc.getWidth()<<endl;
	cout << "�ö���ĸ��ǣ�" << myrc.getHeight()<<endl;
	cout << "�ö�����ܳ��ǣ�" << myrc.Circumference()<<endl;
	cout << "�ö��������ǣ�" << myrc.Area()<<endl;
	//3���޸ĸö�������Ͻ����꣬����
	myPoint myrc2(3, 4);
	myrc.setLeftTop(myrc2);
	myrc.setWidth(5);
	myrc.setHeight(6);
	//4������ö�������Ͻ����꣬���ߣ��ܳ������
	cout << "�ö�������Ͻ������ǣ�" << myrc.getLeftTop().GetX() << " " << myrc.getLeftTop().GetY() << endl;
	cout << "�ö���Ŀ��ǣ�" << myrc.getWidth() << endl;
	cout << "�ö���ĸ��ǣ�" << myrc.getHeight() << endl;
	cout << "�ö�����ܳ��ǣ�" << myrc.Circumference() << endl;
	cout << "�ö��������ǣ�" << myrc.Area() << endl;
}
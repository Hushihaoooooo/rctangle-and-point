//shiyan1.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	//1、定义一个矩形对象
	Rectangle myrc(1, 2, 3, 4);
	//2、输出该对象的左上角坐标，宽，高，周长和面积
	cout << "该对象的左上角坐标是：" << myrc.getLeftTop().GetX() << " " << myrc.getLeftTop().GetY()<<endl;
	cout << "该对象的宽是：" << myrc.getWidth()<<endl;
	cout << "该对象的高是：" << myrc.getHeight()<<endl;
	cout << "该对象的周长是：" << myrc.Circumference()<<endl;
	cout << "该对象的面积是：" << myrc.Area()<<endl;
	//3、修改该对象的左上角坐标，宽，高
	myPoint myrc2(3, 4);
	myrc.setLeftTop(myrc2);
	myrc.setWidth(5);
	myrc.setHeight(6);
	//4、输出该对象的左上角坐标，宽，高，周长和面积
	cout << "该对象的左上角坐标是：" << myrc.getLeftTop().GetX() << " " << myrc.getLeftTop().GetY() << endl;
	cout << "该对象的宽是：" << myrc.getWidth() << endl;
	cout << "该对象的高是：" << myrc.getHeight() << endl;
	cout << "该对象的周长是：" << myrc.Circumference() << endl;
	cout << "该对象的面积是：" << myrc.Area() << endl;
}
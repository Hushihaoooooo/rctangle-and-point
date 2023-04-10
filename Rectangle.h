//Rectangle.hÍ·ÎÄ¼þ
#include <iostream>
#include "myPoint.h"
using namespace std;
class Rectangle
{
private:
	myPoint m_lefttop;
	double  m_Height;
	double  m_Width;
public:
	Rectangle(int x, int y, double w, double h);
	void setLeftTop(myPoint& p1);
	myPoint& getLeftTop();
	void setWidth(double w);
	double getWidth();
	void setHeight(double w);
	double getHeight();
	double Circumference();
	double Area();
};
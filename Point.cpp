//Point.cpp类的实现
#include <iostream>
#include "myPoint.h"
myPoint::myPoint(int x, int y)
{
	m_X = x;
	m_Y = y;
}
myPoint::myPoint(myPoint& p)
{
	m_X = p.m_X;
	m_Y = p.m_Y;
}
void myPoint::SetX(int x)
{
	m_X = x;
}
void myPoint::SetY(int y)
{
	m_Y= y;
}
int myPoint::GetX()
{
	return m_X;
}
int myPoint::GetY()
{
	return m_Y;
}
void myPoint::display()
{
	cout << m_X << " " << m_Y;
}



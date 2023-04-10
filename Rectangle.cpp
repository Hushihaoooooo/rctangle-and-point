#include <iostream>
#include "Rectangle.h"
Rectangle::Rectangle(int x, int y, double w, double h):m_lefttop(x,y)
{
	m_Height = h;
	m_Width = w;
}
void Rectangle::setLeftTop(myPoint& p1)
{
	m_lefttop.SetX(p1.GetX());
	m_lefttop.SetY(p1.GetY());
}
myPoint& Rectangle::getLeftTop()
{
	return m_lefttop;
}
void Rectangle::setWidth(double w)
{
	m_Width = w;
}
double Rectangle::getWidth()
{
	return m_Width;
}
void Rectangle::setHeight(double h)
{
	m_Height = h;
}
double Rectangle::getHeight()
{
	return m_Height;
}
double Rectangle::Circumference()
{
	int px = m_Height;
	int py = m_Width;
	return (px + py) * 2;
}
double Rectangle::Area()
{
	int px = m_Height;
	int py = m_Width;
	return px*py;
}
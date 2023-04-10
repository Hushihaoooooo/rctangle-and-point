// myPoint.h
#include <iostream>
using namespace std;

//类的聚集
class myPoint	//myPoint类定义
{
private:
	int m_X, m_Y;
public:
	myPoint(int x, int y);
	myPoint(myPoint& p);
	void SetX(int x);
	void SetY(int y);
	int GetX();
	int GetY();
	void display();
};
#include<iostream>
#include<string>
#include<math.h>
#include"Circle.h"
#include"Point.h"
using namespace std;

//����Բ��ϵ����
// ����
/*class  Point
{
public:
	void setX(int x)
	{
		m_X = x;
	}
	int getX()
	{
		return m_X;
	}

	void setY(int y)
	{
		m_Y = y;
	}
	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;

};*/

//Բ��
/*class Circle
{

public:
	void setR(int r)
	{
		m_R = r;
	}

	int getR()
	{
		return m_R;
	}

	void setCenter(Point center)
	{
		m_center = center;
	}

	Point getCenter()
	{
		return m_center;
	}
private:
	int m_R;

	Point m_center;

};*/

void judge(Circle &c, Point &p)
{
	int distance = pow(c.getCenter().getX() - p.getX(), 2) + pow(c.getCenter().getY() - p.getY(), 2);

	int rdistance = pow(c.getR(), 2);

	if (distance==rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance>rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}


int main() {

	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(9);

	judge(c, p);

	system("pause");

	return 0;
}
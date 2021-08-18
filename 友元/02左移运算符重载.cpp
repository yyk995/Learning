#include<iostream>

using namespace std;

//左移运算符重载

class Person
{
public:
	//利用成员函数重载 左移运算符


	int m_a;
	int m_b;
};

//只能用全局函数重载左移运算符
ostream& operator<<(ostream& cout, Person& p)//本质 operator<< (cout,p) 简化cout << p
{
	cout << "m_a= " << p.m_a << "m_b= " << p.m_b;
	return cout;
}


void test01()
{
	Person p;
	p.m_a = 10;
	p.m_b = 10;
	cout << p<<endl;
}

int main()
{

	test01();

	system("pause");

	return 0;
}
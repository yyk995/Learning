#include<iostream>
using namespace std;
//重载递增运算符

//自定义整型
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//重载前置++运算符
	MyInteger& operator++()//前置递增要返回引用
	{
		m_num++;//先进行++运算
		return *this;//再将自身返回
		
	}
	//重载后置++运算符
	//void operator++(int) int代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int)//后置递增要返回值
	{
		//先 记录当时结果
		MyInteger temp = *this;
		//后递增
		m_num++;
		//最后将记录结果做返回
		return temp;

	}

private:
	int m_num;

};

//重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}

void test()
{
	MyInteger myint;
	
	cout << ++myint << endl;
}

void test01()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	//test();

	test01();

	system("pause");

	return 0;
}
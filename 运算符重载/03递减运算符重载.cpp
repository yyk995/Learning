#include<iostream>
using namespace std;

class Myinteger
{
	friend ostream& operator<<(ostream& cout, Myinteger myint);
public:
	Myinteger()
	{
		m_num = 2;
	}

	Myinteger& operator--()
	{
		--m_num;
		return *this;
	}

	Myinteger operator--(int)
	{
		Myinteger temp = *this;
		m_num--;
		return temp;
	}


private:
	int m_num;
};

ostream& operator<<(ostream& cout, Myinteger myint)
{
	cout << myint.m_num;
	return cout;
}

void test()
{
	Myinteger myint;
	cout << --myint<< endl;
}

void test01()
{
	Myinteger myint;
	cout << myint-- << endl;
	cout << myint << endl;
}

int main()
{ 
	//test();
	test01();
	system("pause");

	return 0;
}
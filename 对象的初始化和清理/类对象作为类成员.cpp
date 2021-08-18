#include<iostream>
using namespace std;

//类对象作为类成员

class Phone
{
public:

	Phone(string pname)
	{
		cout << "Phone的构造函数调用" << endl;
		m_Pname = pname;
	}


	string m_Pname;
};

class Person
{
public:

	//Phone m_Phone=pname
	Person(string name, string pname) :m_name(name), m_Phone(pname)
	{
		cout << "Person的构造函数调用" << endl;
	}

	string m_name;

	Phone m_Phone;


};

//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序与构造相反

void test01()
{
	Person p("张三", "苹果MAX");
	cout << p.m_name << "拿着：" << p.m_Phone.m_Pname << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
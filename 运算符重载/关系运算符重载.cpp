#include<iostream>
using namespace std;

//重载关系运算符

class person
{
public:
	person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}


	//重载==号
	bool operator==(person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}

	bool operator!=(person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return false;
		}
		return true;
	}
	string m_name;
	int m_age;
};

void test01()
{
	person p1("Tom", 18);

	person p2("Jerry", 18);
	if (p1==p2)
	{
		cout << "p1和p2是相等的" << endl;
	}
	else
	{
		cout << "p1和p2是不相同的" << endl;
	}
}

int main()
{

	test01();

	system("pause");

	return 0;
}
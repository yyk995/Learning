#include<iostream>
using namespace std;

//�������Ϊ���Ա

class Phone
{
public:

	Phone(string pname)
	{
		cout << "Phone�Ĺ��캯������" << endl;
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
		cout << "Person�Ĺ��캯������" << endl;
	}

	string m_name;

	Phone m_Phone;


};

//�������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������������˳���빹���෴

void test01()
{
	Person p("����", "ƻ��MAX");
	cout << p.m_name << "���ţ�" << p.m_Phone.m_Pname << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
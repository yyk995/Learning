#include<iostream>

using namespace std;

//�������������

class Person
{
public:
	//���ó�Ա�������� ���������


	int m_a;
	int m_b;
};

//ֻ����ȫ�ֺ����������������
ostream& operator<<(ostream& cout, Person& p)//���� operator<< (cout,p) ��cout << p
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
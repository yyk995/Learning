#include<iostream>
using namespace std;

//�Ӻ����������

class Person
{
public:
	//1����Ա��������+��
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}*/

	int m_a;
	int m_b;
};

//2��ȫ�ֺ�������+��
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}

Person operator+(Person& p1, int num) 
{
	Person temp;
	temp.m_a = p1.m_a + num;
	temp.m_b = p1.m_b + num;
	return temp;
}

void test01()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 10;
	Person p2;
	p2.m_a = 20;
	p2.m_b = 20;
	//��Ա�������ر��ʵ���
	//Person p3 = p1.operator+(p2);
	
	//ȫ�ֺ������ر��ʵ���
	//Person p3 = operator+(p1, p2);

	Person p3 = p1 + p2;
	//��������أ�Ҳ���Է�����������

	Person p4 = p1 + 100;
	cout << "p3.m_a= " << p3.m_a << endl;
	cout << "p3.m_b= " << p3.m_b << endl;

	cout << "p4.m_a= " << p4.m_a << endl;
	cout << "p4.m_b= " << p4.m_b << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
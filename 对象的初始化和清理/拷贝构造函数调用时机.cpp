#include<iostream>
using namespace std;

//�������캯������ʱ��

//1��ʹ��һ���Ѿ�������ϵö�������ʼ��һ���¶���
//2��ֵ���ݵ÷�ʽ������������ֵ
//3��ֵ��ʽ���ؾֲ�����

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}
	Person(int age)
	{
		cout << "Person�вι��캯������" << endl;
		m_age = age;
	}

	Person(const Person & p)
	{
		cout << "Person�������캯������" << endl;
		m_age = p.m_age;
	}
	~Person()
	{
		cout << "Person������������" << endl;
	}
	int m_age;
};

//1��ʹ��һ���Ѿ�������ϵö�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);

	cout << "p2������Ϊ�� " << p2.m_age << endl;
 }
//2��ֵ���ݵ÷�ʽ������������ֵ
void dowork(Person p)
{

}

void test02()
{
	Person p;
	dowork(p);
}
//3��ֵ��ʽ���ؾֲ�����
Person dowork1()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = dowork1();
	cout << (int*)&p<< endl;
}

int main()
{
	//test01();
	//test02();
	test03();


	system("pause");

	return 0;
}
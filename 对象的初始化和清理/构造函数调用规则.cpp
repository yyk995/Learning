#include<iostream>
using namespace std;

//���캯���ĵ��ù���
//1������һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//�������죨ֵ������


//2���������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬��Ȼ�ṩ��������
//�������д�˿������캯�����������Ͳ����ṩ������ͨ���캯����
class Person
{
public:
	/*Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}*/

	Person(int age)
	{
		cout << "Person���вι��캯������" << endl;
		m_age = age;
	}

	/*Person(const Person& p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_age = p.m_age;
	}*/

	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int m_age;
};


//void test01()
//{
//	Person p;
//	p.m_age = 18;
//
//	Person p2(p);
//
//	cout << "p2������Ϊ�� " << p2.m_age << endl;
//}

void test02()
{
	Person p(28);

	Person p2(p);
	cout << "p2������Ϊ�� " << p2.m_age << endl;

}

int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}
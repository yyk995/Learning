#include<iostream>
using namespace std;

//�����ǳ����

class Person
{
public:
	Person()
	{
		cout << "Person ���޲ι��캯������" << endl;
	}

	Person(int a,int height)
	{
		age = a;
		m_Height = new int(height);
		cout << "Person ���вι��캯������" << endl;
	}

	~Person()
	{
		//�������룬�����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person ��������������" << endl;
	}

	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
	Person(const Person& p)
	{
		cout << "Person �������캯������" << endl;
		age = p.age;
		//m_Height = p.m_Height;������Ĭ��ʵ�־������д���

		//�������
		m_Height = new int(*p.m_Height);
		
	}

	int age;
	int* m_Height;
};

void test01()
{
	Person p1(18, 170);

	cout << "p1������Ϊ�� " << p1.age <<"���Ϊ�� "<<*p1.m_Height<< endl;
	Person p2(p1);
	cout << "p2������Ϊ�� " << p2.age << "���Ϊ�� " <<*p2.m_Height << endl;
}
int main()
{
	test01();

	system("pause");

	return 0;
}
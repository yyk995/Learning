#include<iostream>
using namespace std;

//��̬��Ա����
//1�����ж�����ͬһ������
//2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_a = 100;//��̬��Ա�������Է��� ��̬��Ա����
		//m_b = 200;//��̬��Ա���� ���ɷ��ʷǾ�̬�������޷����ֵ������ĸ������m_b����
		cout << "static void func ����" << endl;
	}

	static int m_a;//��̬��Ա����
	int m_b;//�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2����" << endl;
	}
};

int Person::m_a = 0;

void test01()
{
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func();

	//Person::func2();������ʲ���˽�о�̬��Ա����
}

int main()
{
	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;

//���麯���ͳ�����
class base
{
public:
	//���麯��
	//ֻҪ��һ�����麯����������Ϊ������ �ص�
	//1���޷�ʵ�������� 2������������� ����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
	//
	virtual void func() = 0;

	int m_id;
};

class son :public base
{
public:
	son(int id)
	{
		m_id = id;
	}

	virtual void func() 
	{
		cout << "func��������" << endl;
	};


};

void test01()
{
	//base d;//���������޷�ʵ��������
    //new base;//���������޷�ʵ��������

	//son s;//���������д�����еĴ��麯���������޷�ʵ��������

	base* base = new son(10);
	base->func();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
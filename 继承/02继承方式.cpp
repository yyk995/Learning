#include<iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
class basel
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1:public basel
{
public:
	void func()
	{
		m_a = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_b = 10;//�����еñ���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
	}
};



//�����̳�
class son2:protected basel
{
public:
	void func()
	{
		m_a = 100;//�����й�����Ա �������б�Ϊ����Ȩ��
		m_b = 100;//�����б�����Ա �������б�Ϊ����Ȩ��
	}
};

//˽�м̳�
class son3 :private basel
{
public:
	void func()
	{
		m_a = 1000;//�����й�����Ա �������б�Ϊ˽�г�Ա
		m_b = 1000;//�����й�����Ա �������б�Ϊ˽�г�Ա
	}
};

void test01()
{
	son1 s1;
	s1.m_a = 100;
	//��son1��m_b�Ǳ���Ȩ�� ������ʲ���
	//��son2�� m_a��Ϊ����Ȩ�ޣ����������ʲ���

}
int main()
{

	system("pause");

	return 0;
}
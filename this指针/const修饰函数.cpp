#include<iostream>
using namespace std;


//������
class  person
{
public:
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ����޸ĵ�
	//const person *const this;
	//�ڳ�Ա���������const,���ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{

		//this->m_a = 100;
		//this = NULL;//thisָ�벻�����޸�ָ���ָ���
		this->m_b = 100;
	 }

	void func()
	{

	}

	int m_a;
	mutable int m_b;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���muutable
};

void test01()
{
	person p;
	p.showPerson();
}

//������
void test02()
{
	const person p;//�ڶ���ǰ��const,��Ϊ������
	p.m_a = 100;
	p.m_b = 100;//m_b������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	
}

int main()
{
	

	system("pause");

	return 0;
}
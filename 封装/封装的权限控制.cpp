#include<iostream>
using namespace std;

//����Ȩ�� ����
//����Ȩ�� public  ��Ա ���ڿ��Է��� ������Է���
//����Ȩ�� protected  ��Ա ���ڿ��Է��� ���ⲻ���Է���
//˽��Ȩ�� private    ��Ա ���ڿ��Է��� ���ⲻ���Է���


class Person
{
public:
	//����Ȩ��
	string m_name;

protected:
	//����Ȩ��
	string m_Car;

private:
	//˽��Ȩ��
	int m_Password;

public:
	void func()
	{
		m_name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};



int main() {
	Person pl;

	pl.m_name = "����";
	//pl.m_Car = "����";����Ȩ�����ݣ���������ʲ���
	//pl.m_Password = 12345;˽��Ȩ�����ݣ�������ʲ���
	system("pause");

	return 0;
}
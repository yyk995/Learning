#include<iostream>
#include<string>
using namespace std;

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��


//�������
class person
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		return m_name;
	}
	
	int getage()
	{
		m_age = 18;
		return m_age;
	}

	string setlover(string lover)
	{
		m_lover = lover;
	}

private:
	//���� �ɶ���д
	string m_name;
	//���� ֻ��
	int m_age;
	//���� ֻд
	string m_lover;
};

int main() {

	person pl;
	pl.setname("����");

	pl.setlover("С��");
	cout << "������ " << pl.getname() << endl;

	cout << "���䣺 " << pl.getage() << endl;


	system("pause");

	return 0;
}
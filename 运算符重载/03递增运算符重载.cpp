#include<iostream>
using namespace std;
//���ص��������

//�Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//����ǰ��++�����
	MyInteger& operator++()//ǰ�õ���Ҫ��������
	{
		m_num++;//�Ƚ���++����
		return *this;//�ٽ�������
		
	}
	//���غ���++�����
	//void operator++(int) int����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int)//���õ���Ҫ����ֵ
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�����
		m_num++;
		//��󽫼�¼���������
		return temp;

	}

private:
	int m_num;

};

//�������������
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}

void test()
{
	MyInteger myint;
	
	cout << ++myint << endl;
}

void test01()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	//test();

	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;


class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
		this->age = age;
	}

	Person& Personaddage(Person& p)
	{
		this->age += p.age;
		//thisָ��p2��ָ�룬��*thisָ��Ķ������p2���������
		return *this;
	}

	int age;
};
//1������Ƴ�ͻ

void test01()
{
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}



//2���ض�������*this
void test02()
{
	Person p1(10);

	Person p2(10);

	//��ʽ���˼��
	p2.Personaddage(p1).Personaddage(p1).Personaddage(p1);
	cout << "p2������Ϊ�� " << p2.age << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
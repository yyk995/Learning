#include<iostream>
using namespace std;

class Person
{
public:

	void showClassname()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonage()
	{
		//����ԭ������Ϊ�����ָ����Ϊ��NULL

		if (this==NULL)
		{
			return;
		}
		cout << "age= " << this->m_age << endl;
	}

	int m_age;
};

void test01()
{
	Person* p = NULL;

	p->showClassname();
	p->showPersonage();
}

int main()
{
	test01();

	system("pause");


	return 0;
}
#include<iostream>
using namespace std;

class person
{
public:
	person(int age)
	{
		m_age = new int(age);
	}

	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}

	//重载 赋值运算符
	person&  operator=(person &p)
	{
		//编译器是提供浅拷贝
		//m_age=p.m_age;

		//应该先判断是否有属性在堆区，如果有先释放干净，然后在深拷贝
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//深拷贝
		m_age = new int(*p.m_age);
		//返回对象自身
		return *this;
	}

	int* m_age;

};

void test01()
{
	person p1(18);

	person p2(20);

	person p3(30);
	p3 = p2 = p1;

	cout << "p1的年龄为：" << *p1.m_age << endl;
	cout << "p2的年龄为：" << *p2.m_age << endl;
	cout << "p3的年龄为：" << *p3.m_age << endl;
}

int main()
{
	test01();


	system("pause");

	return 0;
}
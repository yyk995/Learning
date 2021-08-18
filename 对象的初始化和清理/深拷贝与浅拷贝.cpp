#include<iostream>
using namespace std;

//深拷贝与浅拷贝

class Person
{
public:
	Person()
	{
		cout << "Person 的无参构造函数调用" << endl;
	}

	Person(int a,int height)
	{
		age = a;
		m_Height = new int(height);
		cout << "Person 的有参构造函数调用" << endl;
	}

	~Person()
	{
		//析构代码，将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person 的析构函数调用" << endl;
	}

	//自己实现拷贝构造函数 解决浅拷贝带来的问题
	Person(const Person& p)
	{
		cout << "Person 拷贝构造函数调用" << endl;
		age = p.age;
		//m_Height = p.m_Height;编译器默认实现就是这行代码

		//深拷贝操作
		m_Height = new int(*p.m_Height);
		
	}

	int age;
	int* m_Height;
};

void test01()
{
	Person p1(18, 170);

	cout << "p1的年龄为： " << p1.age <<"身高为： "<<*p1.m_Height<< endl;
	Person p2(p1);
	cout << "p2的年龄为： " << p2.age << "身高为： " <<*p2.m_Height << endl;
}
int main()
{
	test01();

	system("pause");

	return 0;
}
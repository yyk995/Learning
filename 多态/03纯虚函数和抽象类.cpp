#include<iostream>
using namespace std;

//纯虚函数和抽象类
class base
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类 特点
	//1、无法实例化对象 2、抽象类的子类 必须要重写父类中的纯虚函数，否则也属于抽象类
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
		cout << "func函数调用" << endl;
	};


};

void test01()
{
	//base d;//抽象类是无法实例化对象
    //new base;//抽象类是无法实例化对象

	//son s;//子类必须重写父类中的纯虚函数，否则无法实例化对象

	base* base = new son(10);
	base->func();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
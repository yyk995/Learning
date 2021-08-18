#include<iostream>
#include<string>
using namespace std;

//函数调用运算符重载

//打印输出类
class myprint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void myprint2(string test)
{
	cout << test << endl;
}

void test01()
{
	//重载函数调用运算符
	myprint print1;

	print1("hello world");//由于使用起来非常类似函数调用，因此称为仿函数

	myprint2("hello world"); 
}


class myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	myadd add;
	int ret = add(100, 100);
	cout << "ret = " << ret << endl;

	//匿名函数对象
	cout << myadd()(100, 100) << endl;

}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
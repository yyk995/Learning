#include<iostream>
#include<string>
using namespace std;

//普通写法
class calculator
{
public:

	int getresult(string oper)
	{
		if (oper=="+")
		{
			return m_num1 + m_num2;
		}
		else if (oper=="-")
		{
			return m_num1 - m_num2;
		}
		else if (oper=="*")
		{
			return m_num1 * m_num2;
		}
		//如果想扩展新的功能，需要修改源码
	}

	int m_num1;//操作数1
	int m_num2;//操作数2
};

void test01()
{
	//创建计算器对象
	calculator c;
	c.m_num1 = 10;
	c.m_num2 = 10;
	
	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getresult("+") << endl;
	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getresult("-") << endl;
	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getresult("*") << endl;
}

//利用多态实现计算器
//实现计算器抽象类
class abstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};

//加法计算器类
class addCalculator :public abstractCalculator
{
public:
	int getResult()
	{
		return m_num1 + m_num2;
	}
};

//减法计算器类
class subCalculator :public abstractCalculator
{
public:
	int getResult()
	{
		return m_num1 - m_num2;
	}
};

//乘法计算器类
class mulCalculator :public abstractCalculator
{
public:
	int getResult()
	{
		return m_num1 * m_num2;
	}
};

void test02()
{
	//多态使用条件
	//父类指针或者引用指向子类对象

	//加法运算
	abstractCalculator* abc = new addCalculator;

	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
   //用来后记得销毁
	delete abc;

	//减法运算
	abc = new subCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;

	//乘法运算
	abc = new mulCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;
}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
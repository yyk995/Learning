#include<iostream>
using namespace std;


//常函数
class  person
{
public:
	//this指针的本质 是指针常量 指针的指向是不可修改的
	//const person *const this;
	//在成员函数后面加const,修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const
	{

		//this->m_a = 100;
		//this = NULL;//this指针不可以修改指针的指向的
		this->m_b = 100;
	 }

	void func()
	{

	}

	int m_a;
	mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值，加关键字muutable
};

void test01()
{
	person p;
	p.showPerson();
}

//常对象
void test02()
{
	const person p;//在对象前加const,变为常对象
	p.m_a = 100;
	p.m_b = 100;//m_b是特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	
}

int main()
{
	

	system("pause");

	return 0;
}
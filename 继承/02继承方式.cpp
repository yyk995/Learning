#include<iostream>
using namespace std;

//继承方式

//公共继承
class basel
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1:public basel
{
public:
	void func()
	{
		m_a = 10;//父类中的公共权限成员 到子类中依然是公共权限
		m_b = 10;//父类中得保护权限成员 到子类中依然是保护权限
	}
};



//保护继承
class son2:protected basel
{
public:
	void func()
	{
		m_a = 100;//父类中公共成员 到子类中变为保护权限
		m_b = 100;//父类中保护成员 到子类中变为保护权限
	}
};

//私有继承
class son3 :private basel
{
public:
	void func()
	{
		m_a = 1000;//父类中公共成员 到子类中变为私有成员
		m_b = 1000;//父类中公共成员 到子类中变为私有成员
	}
};

void test01()
{
	son1 s1;
	s1.m_a = 100;
	//到son1中m_b是保护权限 类外访问不到
	//到son2中 m_a变为保护权限，因此类外访问不到

}
int main()
{

	system("pause");

	return 0;
}
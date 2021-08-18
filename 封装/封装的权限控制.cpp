#include<iostream>
using namespace std;

//访问权限 三种
//公共权限 public  成员 类内可以访问 类外可以访问
//保护权限 protected  成员 类内可以访问 类外不可以访问
//私有权限 private    成员 类内可以访问 类外不可以访问


class Person
{
public:
	//公共权限
	string m_name;

protected:
	//保护权限
	string m_Car;

private:
	//私有权限
	int m_Password;

public:
	void func()
	{
		m_name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};



int main() {
	Person pl;

	pl.m_name = "李四";
	//pl.m_Car = "奔驰";保护权限内容，在类外访问不到
	//pl.m_Password = 12345;私有权限内容，类外访问不到
	system("pause");

	return 0;
}
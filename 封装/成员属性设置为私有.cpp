#include<iostream>
#include<string>
using namespace std;

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性


//设计人类
class person
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		return m_name;
	}
	
	int getage()
	{
		m_age = 18;
		return m_age;
	}

	string setlover(string lover)
	{
		m_lover = lover;
	}

private:
	//姓名 可读可写
	string m_name;
	//年龄 只读
	int m_age;
	//情人 只写
	string m_lover;
};

int main() {

	person pl;
	pl.setname("张三");

	pl.setlover("小洪");
	cout << "姓名： " << pl.getname() << endl;

	cout << "年龄： " << pl.getage() << endl;


	system("pause");

	return 0;
}
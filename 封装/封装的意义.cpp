#include<iostream>
using namespace std;


const double PI = 3.14;
//设计一个圆类，求圆的周长

//class代表设计一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:

	//属性 半径
	int m_r;
	//行为 获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
class student
{
public://公共权限

	//类中的属性和行为 成为成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法
	//属性
	string name;
	int number;


	//行为
	//显示姓名和函数
	void showstudent()
	{
		cout << "学生的姓名： " << name << " 学号： " << number << endl;
	}
	//给姓名复制
	void setname(string  ipname)
	{
		name = ipname;
	}
	//给学号赋值
	void setid(int id)
	{
		number = id;
	}
};




int main() {
	//通过圆类 创建具体的圆（对象）
	Circle cl;
	//给圆对象的属性进行赋值
	cl.m_r = 10;

	cout << "圆的周长为： " << cl.calculateZC() << endl;

	student s1;
	cout << "输入学生的姓名：" << endl;
	cin >> s1.name;
	cout << "输入学生的学号：" << endl;
	cin >> s1.number;
	s1.showstudent();


	student s2;
	s2.setname("李四");
	s2.setid(2);
	
	s2.showstudent();

	system("pause");
	return 0;
}
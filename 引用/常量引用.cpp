#include<iostream>
using namespace std;


void showValue(const int&a)
{
	//a = 1000;
	cout << "a=" << a << endl;
}
int main() {
	//常量引用
	//使用场景：用来修饰形参，防止误操作

	//int a = 10;
	
	//int& ref = 10;引用本身需要一个合法的内存空间，因此这行错误
	//加上const之后就可以了 编译器将代码修改 int temp=10； const int & ref=temp；
	//const int& ref = 10;
	
	//函数中利用常量引用防止误操作修改实参
	int a = 100;

	showValue(a);
	cout << "a=" << a << endl;

	system("pause");

	return 0;
}
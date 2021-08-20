#include<iostream>
using namespace std;


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 10;
	int b = 20;

	swap(a, b);//引用传递，形参会修饰实参

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");

	return 0;
}
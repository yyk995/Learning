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

	swap(a, b);//���ô��ݣ��βλ�����ʵ��

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");

	return 0;
}
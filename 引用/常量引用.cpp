#include<iostream>
using namespace std;


void showValue(const int&a)
{
	//a = 1000;
	cout << "a=" << a << endl;
}
int main() {
	//��������
	//ʹ�ó��������������βΣ���ֹ�����

	//int a = 10;
	
	//int& ref = 10;���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬������д���
	//����const֮��Ϳ����� �������������޸� int temp=10�� const int & ref=temp��
	//const int& ref = 10;
	
	//���������ó������÷�ֹ������޸�ʵ��
	int a = 100;

	showValue(a);
	cout << "a=" << a << endl;

	system("pause");

	return 0;
}
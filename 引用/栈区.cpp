#include<iostream>
using namespace std;

//ջ������ע������--��Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�


int * func()
{
	int a = 10;//�ֲ����� �����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a;
}
int main() {
	
	int* p = func();
	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱���
	cout << *p << endl;//�ڶ���������ݾͲ��ٱ���



	system("pause");
	return 0;

}
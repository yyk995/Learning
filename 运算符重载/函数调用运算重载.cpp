#include<iostream>
#include<string>
using namespace std;

//�����������������

//��ӡ�����
class myprint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void myprint2(string test)
{
	cout << test << endl;
}

void test01()
{
	//���غ������������
	myprint print1;

	print1("hello world");//����ʹ�������ǳ����ƺ������ã���˳�Ϊ�º���

	myprint2("hello world"); 
}


class myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	myadd add;
	int ret = add(100, 100);
	cout << "ret = " << ret << endl;

	//������������
	cout << myadd()(100, 100) << endl;

}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
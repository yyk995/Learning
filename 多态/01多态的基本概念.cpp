#include<iostream>
using namespace std;

//��̬
//������
class animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class cat :public animal
{
public:
	virtual void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class dog :public animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶�ȷ��������ַ
//�����ִ����è˵���������������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

//��̬��̬��������
//1���м̳й�ϵ
//2��������д������麯��

//��̬��̬ʹ��
//�����ָ��������� ִ���������
void dospeak(animal& ani)//animal & ani = cat;
{
	ani.speak();

}

void test01()
{
	cat mao;
	dospeak(mao);
	dog d;
	dospeak(d);
}

void test02()
{
	cout << "sizeof animal = " << sizeof(animal) << endl;
}

int main()
{

	test01();
	test02();


	system("pause");

	return 0;
}
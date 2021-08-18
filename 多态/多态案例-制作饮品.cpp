#include<iostream>
#include<string>

using namespace std;

//��̬���� ������Ʒ
class abstractDrinking
{
public:
	//��ˮ
	virtual void boil() = 0;

	//����
	virtual void brew() = 0;

	//���뱭��
	virtual void pourcup() = 0;

	//���븨��
	virtual void putsomething() = 0;

	//������Ʒ
	void makedrink()
	{
		boil();
		brew();
		pourcup();
		putsomething();
	}
};

//��������
class coffee :public abstractDrinking
{
public:
	virtual void boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void brew()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void pourcup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void putsomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}

};

//������
class tea :public abstractDrinking
{
public:
	virtual void boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	virtual void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void pourcup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void putsomething()
	{
		cout << "�����Ҷ" << endl;
	}

};

void dowork(abstractDrinking*abs)
{
	abs->makedrink();
}

void test01()
{
	//��������
	dowork(new coffee);
	cout << "-----------" << endl;
	//������
	dowork(new tea);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
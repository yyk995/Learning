#include<iostream>
#include<string>
using namespace std;

//���鹹�ʹ�������
class animal
{
public:
	animal()
	{
		cout << "animal���캯������" << endl;
	}

	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
	/*virtual ~animal()
	{
		cout << "animal������������" << endl;
	}*/

	//�������� ��Ҫ����Ҳ��Ҫʵ��
	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~animal() = 0;



	//���麯��
	virtual void speak() = 0;
};


animal:: ~animal()
{
	cout << "animal����������������" << endl;
}

class cat :public animal
{
public: 
	cat(string name)
	{
		cout << "cat���캯������" << endl;
		m_name=new string(name);
	}

	virtual void speak()
	{
		cout <<*m_name<< "Сè��˵��" << endl;
	}

    ~cat()
	{
		if (m_name != NULL)
		{
			cout << "cat������������" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string *m_name;
};

void test01()
{
	animal* animal = new cat("Tom");
	animal->speak();
	//����ָ��������ʱ�� �����������������������������������ж������ԣ������ڴ�й¶
	delete animal;
}

int main()
{

	test01();

	system("pause");

	return 0;
}
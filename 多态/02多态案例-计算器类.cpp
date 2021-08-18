#include<iostream>
#include<string>
using namespace std;

//��ͨд��
class calculator
{
public:

	int getresult(string oper)
	{
		if (oper=="+")
		{
			return m_num1 + m_num2;
		}
		else if (oper=="-")
		{
			return m_num1 - m_num2;
		}
		else if (oper=="*")
		{
			return m_num1 * m_num2;
		}
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
	}

	int m_num1;//������1
	int m_num2;//������2
};

void test01()
{
	//��������������
	calculator c;
	c.m_num1 = 10;
	c.m_num2 = 10;
	
	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getresult("+") << endl;
	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getresult("-") << endl;
	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getresult("*") << endl;
}

//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
class abstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};

//�ӷ���������
class addCalculator :public abstractCalculator
{
public:
	int getResult()
	{
		return m_num1 + m_num2;
	}
};

//������������
class subCalculator :public abstractCalculator
{
public:
	int getResult()
	{
		return m_num1 - m_num2;
	}
};

//�˷���������
class mulCalculator :public abstractCalculator
{
public:
	int getResult()
	{
		return m_num1 * m_num2;
	}
};

void test02()
{
	//��̬ʹ������
	//����ָ���������ָ���������

	//�ӷ�����
	abstractCalculator* abc = new addCalculator;

	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
   //������ǵ�����
	delete abc;

	//��������
	abc = new subCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;

	//�˷�����
	abc = new mulCalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;
	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
	delete abc;
}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include<string>


//��������
class Building
{
	//goodȫ�ֺ����� Building�����ѣ����Է���Building��˽�г�Ա
	friend void good(Building &building);//Ҫ��ı�ʵ�ε�ֵ��Ҫ�õ�ָ���������
public:

	//����д��Ա����
	Building()
	{
		m_sittingroom = "����";
		m_bedroom = "����";
	}

	string m_sittingroom;//����
private:
	string m_bedroom;//����
};

//ȫ�ֺ���
void good(Building &building)
{
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ� " << building.m_sittingroom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ� " << building.m_bedroom << endl;
}

void test01()
{
	Building building;
	good(building);
}

int main()
{
	test01();


	system("pause");

	return 0;
}
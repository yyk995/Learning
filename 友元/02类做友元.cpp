#include<iostream>
using namespace std;
#include<string>

//������Ԫ

class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();//�ιۺ��� ����Builiding�е�����

	Building* building;
};

class Building
{
	friend class GoodGay;

public:
	Building();

	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û��������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ� " << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}


int main()
{
	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;


const double PI = 3.14;
//���һ��Բ�࣬��Բ���ܳ�

//class�������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//���� �뾶
	int m_r;
	//��Ϊ ��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
class student
{
public://����Ȩ��

	//���е����Ժ���Ϊ ��Ϊ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����
	//����
	string name;
	int number;


	//��Ϊ
	//��ʾ�����ͺ���
	void showstudent()
	{
		cout << "ѧ���������� " << name << " ѧ�ţ� " << number << endl;
	}
	//����������
	void setname(string  ipname)
	{
		name = ipname;
	}
	//��ѧ�Ÿ�ֵ
	void setid(int id)
	{
		number = id;
	}
};




int main() {
	//ͨ��Բ�� ���������Բ������
	Circle cl;
	//��Բ��������Խ��и�ֵ
	cl.m_r = 10;

	cout << "Բ���ܳ�Ϊ�� " << cl.calculateZC() << endl;

	student s1;
	cout << "����ѧ����������" << endl;
	cin >> s1.name;
	cout << "����ѧ����ѧ�ţ�" << endl;
	cin >> s1.number;
	s1.showstudent();


	student s2;
	s2.setname("����");
	s2.setid(2);
	
	s2.showstudent();

	system("pause");
	return 0;
}
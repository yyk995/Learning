#include<iostream>
#include<string>
#include<math.h>
#define MAX 1000

using namespace std;

void Menu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

void Modifymenu() 
{
	cout << "*************************" << endl;
	cout << "*****  1���޸�����  *****" << endl;
	cout << "*****  2���޸��Ա�  *****" << endl;
	cout << "*****  3���޸�����  *****" << endl;
	cout << "*****  4���޸ĵ绰  *****" << endl;
	cout << "*****  5���޸�סַ  *****" << endl;
	cout << "*****  6���˳��޸�  *****" << endl;
	cout << "*************************" << endl;
}


struct people
{
	string mname;
	
	int msex,mage,mphone;

	string maddress;//�����˵Ľṹ��
};

struct addressmenu
{
	int m_Size;

	people p_information[MAX];
	//����ͨѶ¼�ṹ��
};


void Add(addressmenu *abs)
{
	if (abs->m_Size==MAX)
	{
		cout << "ͨѶ¼�����������޷����" << endl;
		return;
	}
	else
	{
		string name,address;
		int sex=0, age, phone;
		


		cout << "������ " << endl;
		cin >> name;
		abs->p_information[abs->m_Size].mname = name;//����

		

		cout << "�Ա� " << endl;
		cout << "\t1������������" << endl;
		cout << "\t2����������Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->p_information[abs->m_Size].msex = sex;
				break;
			}
			cout << "����������" << endl;
		}//�Ա�

		
		cout << "���䣺" << endl;
		cin >> age;
		abs->p_information[abs->m_Size].mage = age;//����

		
		cout << "�绰���룺 " << endl;
		cin >> phone;
		abs->p_information[abs->m_Size].mphone = phone;

		
		cout << "�����ͥ��ַ��" << endl;
		cin >> address;
		abs->p_information[abs->m_Size].maddress = address;
		//��ַ

		//��������
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}

	
}

void display (addressmenu *abs)
{

	if (abs->m_Size==0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	for (int i = 0; i < abs->m_Size; i++)
	{
		cout << "������ " << abs->p_information[i].mname << " �Ա� " << (abs->p_information[i].msex==1?"��":"Ů")
			<< " ���䣺 " << abs->p_information[i].mage << " �绰���룺 " << abs->p_information[i].mphone
			<< " ��ͥסַ�� " << abs->p_information[i].maddress << endl;
	}

	system("pause");
	system("cls");

}

int detect(addressmenu *abs,string dname)
{

	for (int i = 0; i < abs->m_Size ;i++)
	{
		if (abs->p_information[i].mname==dname)
		{
			return i;
		}
	}
	return -1;
}

void deletep(addressmenu *abs)
{
	string name;
	cout << "������Ҫɾ����ϵ�˵������� " << endl;
	cin >> name;

	int ret = detect(abs, name);

	if (ret!=-1)
	{
		
		for (int i = ret; i <=abs->m_Size-ret; i++)
		{
			abs->p_information[ret] = abs->p_information[ret + 1];
			
		}
		abs->m_Size--;
		cout << "��ɾ��" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

void findp(addressmenu* abs)
{
	cout << "����������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = detect(abs, name);

	if(ret==-1)
	{
		cout << "���޴���" << endl;
		
	}
	else
	{
		cout << "������ " << abs->p_information[ret].mname << " �Ա� " << abs->p_information[ret].msex << " ���䣺 " << abs->p_information[ret].mage
			<< " �绰�� " << abs->p_information[ret].mphone << " ��ͥסַ�� " << abs->p_information[ret].maddress << endl;
		
	}
	system("pause");
	system("cls");
}

void modify(addressmenu* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = detect(abs, name);


	if (ret==-1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		while (true)
		{
			Modifymenu();

			int moselect = 0;
			cin >> moselect;
			string mdname, mdaddress;
			int mdsex, mdphone, mdage;
		

		
			switch (moselect)
			{
			case 1:
			{
				cout << "�޸�������" << endl;
				cin >> mdname;
				abs->p_information[ret].mname = mdname;
				
				system("cls");
			}
			break;
			case 2:
			{
				cout << "�޸��Ա�" << endl;
				cout << "\t1������������" << endl;
				cout << "\t2����������Ů" << endl;
				while (true)
				{
					cin >> mdsex;
					if (mdsex == 1 || mdsex == 2)
					{
						abs->p_information[ret].msex = mdsex;
						break;
					}
					cout << "����������" << endl;
				}
				
				system("cls");
			}
			break;
			case 3:
			{
				cout << "�޸����䣺" << endl;
				cin >> mdage;
				abs->p_information[ret].mage = mdage;
				
				system("cls");
			}
			break;
			case 4:
			{
				cout << "�޸ĵ绰���룺 " << endl;
				cin >> mdphone;
				abs->p_information[ret].mphone = mdphone;
				
				system("cls");
			}
			break;
			case 5:
			{
				cout << "�޸ļ�ͥסַ�� " << endl;
				cin >> mdaddress;
				abs->p_information[ret].maddress = mdaddress;
				
				system("cls");
			}
			break;
			case 6:
				cout << "���˳��޸�,����ͨѶ¼" << endl;
				return;
			
			break;

			default:
				break;
			}
		
		}
	}


	/*if (ret == -1)
	{
		cout << "���޴���" << endl;

	}
	else
	{
		string mdname, mdaddress;
		int mdsex, mdphone, mdage;
		cout << "�޸�������"  << endl;
		cin >> mdname;
		abs->p_information[ret].mname = mdname;


		cout << "�޸��Ա�" << endl;
		cout << "\t1������������" << endl;
		cout << "\t2����������Ů" << endl;
		while (true)
		{
			cin >> mdsex;
			if (mdsex == 1 || mdsex == 2)
			{
				abs->p_information[ret].msex = mdsex;
				break;
			}
			cout << "����������" << endl;
		}//�Ա�

		cout << "�޸����䣺" << endl;
		cin >> mdage;
		abs->p_information[ret].mage = mdage;

		cout << "�޸ĵ绰���룺 " << endl;
		cin >> mdphone;
		abs->p_information[ret].mphone = mdphone;

		cout << "�޸ļ�ͥסַ�� " << endl;
		cin >> mdaddress;
		abs->p_information[ret].maddress = mdaddress;

		cout << "�޸ĳɹ�" << endl;

	}*/
	system("pause");
	system("cls");
}

void clean(addressmenu*abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;

	system("pause");
	system("cls");

}


int main() {
	
	
	addressmenu abs;
	abs.m_Size = 0;
	
	
	while (true)
	{
	Menu();
	int select=0;
	cin >> select;
		switch (select)
		{
		case 1:

			Add(&abs);
			
			//�����ϵ��
			break;
		case 2:
			
			display(&abs);

			//��ʾ��ϵ��
			break;
		case 3:

			deletep(&abs);

			//ɾ����ϵ��
			break;
		case 4:
			findp(&abs);
	
			//������ϵ��
			break;
		case 5:
			modify(&abs);
			//�޸���ϵ��
			break;
		case 6:
			clean(&abs);
			//�����ϵ��
			break;
		case 0:
			
			
			cout << "��ӭ�´�ʹ��" << endl;
			
			system("pause");
			return 0;//�˳�ͨѶ¼
			break;
		
		}
	}
	
	
	

}
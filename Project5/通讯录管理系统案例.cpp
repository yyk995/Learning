#include<iostream>
#include<string>
#include<math.h>
#define MAX 1000

using namespace std;

void Menu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

void Modifymenu() 
{
	cout << "*************************" << endl;
	cout << "*****  1、修改姓名  *****" << endl;
	cout << "*****  2、修改性别  *****" << endl;
	cout << "*****  3、修改年龄  *****" << endl;
	cout << "*****  4、修改电话  *****" << endl;
	cout << "*****  5、修改住址  *****" << endl;
	cout << "*****  6、退出修改  *****" << endl;
	cout << "*************************" << endl;
}


struct people
{
	string mname;
	
	int msex,mage,mphone;

	string maddress;//创建人的结构体
};

struct addressmenu
{
	int m_Size;

	people p_information[MAX];
	//创建通讯录结构体
};


void Add(addressmenu *abs)
{
	if (abs->m_Size==MAX)
	{
		cout << "通讯录人数已满，无法添加" << endl;
		return;
	}
	else
	{
		string name,address;
		int sex=0, age, phone;
		


		cout << "姓名： " << endl;
		cin >> name;
		abs->p_information[abs->m_Size].mname = name;//姓名

		

		cout << "性别： " << endl;
		cout << "\t1—————男" << endl;
		cout << "\t2—————女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->p_information[abs->m_Size].msex = sex;
				break;
			}
			cout << "请重新输入" << endl;
		}//性别

		
		cout << "年龄：" << endl;
		cin >> age;
		abs->p_information[abs->m_Size].mage = age;//年龄

		
		cout << "电话号码： " << endl;
		cin >> phone;
		abs->p_information[abs->m_Size].mphone = phone;

		
		cout << "输入家庭地址：" << endl;
		cin >> address;
		abs->p_information[abs->m_Size].maddress = address;
		//地址

		//清屏操作
		abs->m_Size++;

		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}

	
}

void display (addressmenu *abs)
{

	if (abs->m_Size==0)
	{
		cout << "当前记录为空" << endl;
	}
	for (int i = 0; i < abs->m_Size; i++)
	{
		cout << "姓名： " << abs->p_information[i].mname << " 性别： " << (abs->p_information[i].msex==1?"男":"女")
			<< " 年龄： " << abs->p_information[i].mage << " 电话号码： " << abs->p_information[i].mphone
			<< " 家庭住址： " << abs->p_information[i].maddress << endl;
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
	cout << "请输入要删除联系人的姓名： " << endl;
	cin >> name;

	int ret = detect(abs, name);

	if (ret!=-1)
	{
		
		for (int i = ret; i <=abs->m_Size-ret; i++)
		{
			abs->p_information[ret] = abs->p_information[ret + 1];
			
		}
		abs->m_Size--;
		cout << "已删除" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

void findp(addressmenu* abs)
{
	cout << "请输入你需要查找的联系人：" << endl;
	string name;
	cin >> name;
	int ret = detect(abs, name);

	if(ret==-1)
	{
		cout << "查无此人" << endl;
		
	}
	else
	{
		cout << "姓名： " << abs->p_information[ret].mname << " 性别： " << abs->p_information[ret].msex << " 年龄： " << abs->p_information[ret].mage
			<< " 电话： " << abs->p_information[ret].mphone << " 家庭住址： " << abs->p_information[ret].maddress << endl;
		
	}
	system("pause");
	system("cls");
}

void modify(addressmenu* abs)
{
	cout << "请输入需要修改的联系人：" << endl;
	string name;
	cin >> name;
	int ret = detect(abs, name);


	if (ret==-1)
	{
		cout << "查无此人" << endl;
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
				cout << "修改姓名：" << endl;
				cin >> mdname;
				abs->p_information[ret].mname = mdname;
				
				system("cls");
			}
			break;
			case 2:
			{
				cout << "修改性别：" << endl;
				cout << "\t1—————男" << endl;
				cout << "\t2—————女" << endl;
				while (true)
				{
					cin >> mdsex;
					if (mdsex == 1 || mdsex == 2)
					{
						abs->p_information[ret].msex = mdsex;
						break;
					}
					cout << "请重新输入" << endl;
				}
				
				system("cls");
			}
			break;
			case 3:
			{
				cout << "修改年龄：" << endl;
				cin >> mdage;
				abs->p_information[ret].mage = mdage;
				
				system("cls");
			}
			break;
			case 4:
			{
				cout << "修改电话号码： " << endl;
				cin >> mdphone;
				abs->p_information[ret].mphone = mdphone;
				
				system("cls");
			}
			break;
			case 5:
			{
				cout << "修改家庭住址： " << endl;
				cin >> mdaddress;
				abs->p_information[ret].maddress = mdaddress;
				
				system("cls");
			}
			break;
			case 6:
				cout << "已退出修改,返回通讯录" << endl;
				return;
			
			break;

			default:
				break;
			}
		
		}
	}


	/*if (ret == -1)
	{
		cout << "查无此人" << endl;

	}
	else
	{
		string mdname, mdaddress;
		int mdsex, mdphone, mdage;
		cout << "修改姓名："  << endl;
		cin >> mdname;
		abs->p_information[ret].mname = mdname;


		cout << "修改性别：" << endl;
		cout << "\t1—————男" << endl;
		cout << "\t2—————女" << endl;
		while (true)
		{
			cin >> mdsex;
			if (mdsex == 1 || mdsex == 2)
			{
				abs->p_information[ret].msex = mdsex;
				break;
			}
			cout << "请重新输入" << endl;
		}//性别

		cout << "修改年龄：" << endl;
		cin >> mdage;
		abs->p_information[ret].mage = mdage;

		cout << "修改电话号码： " << endl;
		cin >> mdphone;
		abs->p_information[ret].mphone = mdphone;

		cout << "修改家庭住址： " << endl;
		cin >> mdaddress;
		abs->p_information[ret].maddress = mdaddress;

		cout << "修改成功" << endl;

	}*/
	system("pause");
	system("cls");
}

void clean(addressmenu*abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;

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
			
			//添加联系人
			break;
		case 2:
			
			display(&abs);

			//显示联系人
			break;
		case 3:

			deletep(&abs);

			//删除联系人
			break;
		case 4:
			findp(&abs);
	
			//查找联系人
			break;
		case 5:
			modify(&abs);
			//修改联系人
			break;
		case 6:
			clean(&abs);
			//清空联系人
			break;
		case 0:
			
			
			cout << "欢迎下次使用" << endl;
			
			system("pause");
			return 0;//退出通讯录
			break;
		
		}
	}
	
	
	

}
#include<iostream>
using namespace std;
#include<string>


//建筑物类
class Building
{
	//good全局函数是 Building好朋友，可以访问Building中私有成员
	friend void good(Building &building);//要想改变实参的值需要用到指针或者引用
public:

	//类内写成员函数
	Building()
	{
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}

	string m_sittingroom;//客厅
private:
	string m_bedroom;//卧室
};

//全局函数
void good(Building &building)
{
	cout << "好基友全局函数 正在访问： " << building.m_sittingroom << endl;
	cout << "好基友全局函数 正在访问： " << building.m_bedroom << endl;
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
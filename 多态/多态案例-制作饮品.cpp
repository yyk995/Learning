#include<iostream>
#include<string>

using namespace std;

//多态案例 制作饮品
class abstractDrinking
{
public:
	//煮水
	virtual void boil() = 0;

	//冲泡
	virtual void brew() = 0;

	//倒入杯中
	virtual void pourcup() = 0;

	//加入辅料
	virtual void putsomething() = 0;

	//制作饮品
	void makedrink()
	{
		boil();
		brew();
		pourcup();
		putsomething();
	}
};

//制作咖啡
class coffee :public abstractDrinking
{
public:
	virtual void boil()
	{
		cout << "煮农夫山泉" << endl;
	}
	virtual void brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void pourcup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void putsomething()
	{
		cout << "加入糖和牛奶" << endl;
	}

};

//制作茶
class tea :public abstractDrinking
{
public:
	virtual void boil()
	{
		cout << "煮矿泉水" << endl;
	}
	virtual void brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void pourcup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void putsomething()
	{
		cout << "加入茶叶" << endl;
	}

};

void dowork(abstractDrinking*abs)
{
	abs->makedrink();
}

void test01()
{
	//制作咖啡
	dowork(new coffee);
	cout << "-----------" << endl;
	//制作茶
	dowork(new tea);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
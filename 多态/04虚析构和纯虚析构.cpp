#include<iostream>
#include<string>
using namespace std;

//纯虚构和纯虚析构
class animal
{
public:
	animal()
	{
		cout << "animal构造函数调用" << endl;
	}

	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	/*virtual ~animal()
	{
		cout << "animal析构函数调用" << endl;
	}*/

	//纯虚析构 需要声明也需要实现
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~animal() = 0;



	//纯虚函数
	virtual void speak() = 0;
};


animal:: ~animal()
{
	cout << "animal纯虚析构函数调用" << endl;
}

class cat :public animal
{
public: 
	cat(string name)
	{
		cout << "cat构造函数调用" << endl;
		m_name=new string(name);
	}

	virtual void speak()
	{
		cout <<*m_name<< "小猫在说话" << endl;
	}

    ~cat()
	{
		if (m_name != NULL)
		{
			cout << "cat析构函数调用" << endl;
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
	//父类指针在析构时候 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄露
	delete animal;
}

int main()
{

	test01();

	system("pause");

	return 0;
}